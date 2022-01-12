clc
clearvars;
close all;

%% 

% InputA = [1 1 0 1 1; 1 0 0 1 0; 0 0 0 0 0; 1 1 0 1 1; 1 0 0 1 0];
src = imread('../data/forgery/012_F.png');
src_gray = rgb2gray(src);
InputA = double(src_gray);
[M, N] = size(InputA);

%% Perpare augs

B = 20; %block size
height = (M-B+1);
width = (N-B+1);
A = zeros(height*width,B);

%% overlapping blocks,cal SVD per block than save in A
% use parfor and this struct diminish time from 25s to 4s
% and remain A equal
tic
parfor k=1:width*height
 
    %olblacks{i,j} = InputA(i:i+B-1,j:j+B-1);
    % black = olblacks{i,j};
    [i, j]=ind2sub([height width], k);
    black = InputA(i:i+B-1,j:j+B-1);
    [U, S, V] = svd(black);
    sig = diag(S);
    arow = sub2ind([height width], i , j);
    A(k,:) = sig';

end
fprintf('par time = %g sec\n', toc);

%%

T1 = 0.05;
Ts = 400;
[ordedA, idx]=sortrows(A);
r=1;
rows = length(idx);
%%
% tic
% parfor u=1:rows
%    for v = u+1:rows
%         D = norm(ordedA(u,:)-ordedA(v,:));
%         if D < T1
% %             disp(D)
%             [i, j]=ind2sub([height width],idx(u));
%             [k, l]=ind2sub([height width],idx(v));
%             Cuv = max(abs(i-k),abs(j-l));%Chebyshev distance
%             if Cuv >= Ts
% %                 InputA(i:i+B-1,j:j+B-1) = ones(B)*255;
% %                 InputA(k:k+B-1,l:l+B-1) = ones(B)*128;
%                 disp(["I get forgery" i j])
%             end
%         end
%    end
% end
% fprintf('par time = %g sec\n', toc);

%%

ds = zeros(rows-1,1);
num = 0;
for u = 1:(rows-1)
    v=u+1;
    D = norm(ordedA(u,:)-ordedA(v,:));
    ds(u) = D;
    if D < T1
        num = num+1;
        [i, j]=ind2sub([height width],idx(u));
        [k, l]=ind2sub([height width],idx(v));
        Cuv = max(abs(i-k),abs(j-l));%Chebyshev distance
        Cuvs(num) = Cuv;
        if Cuv >= Ts
            InputA(i:i+B-1,j:j+B-1) = ones(B)*255;
            InputA(k:k+B-1,l:l+B-1) = ones(B)*0;
            disp(["I get forgery" i j])
        end
    end
end

  
%% Scheme-Step3
% 

imshow(uint8(rescale(InputA,0,255)))






