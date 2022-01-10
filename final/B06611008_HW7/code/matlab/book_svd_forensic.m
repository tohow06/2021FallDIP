clc
clearvars;
close all;

%% 

% InputA = [1 1 0 1 1; 1 0 0 1 0; 0 0 0 0 0; 1 1 0 1 1; 1 0 0 1 0];
src = imread('../data/forgery/example.png');
src_gray = rgb2gray(src);
InputA = double(src_gray);
[M, N] = size(InputA);

%% Scheme-Step1. 
%   create overlapping blocks BxB

B = 20; %block size
olblacks = cell(M-B+1,N-B+1);
height = (M-B+1);
width = (N-B+1);

A = zeros(height*width,B);

for j=1:width
    for i=1:height  
%         olblacks{i,j} = InputA(i:i+B-1,j:j+B-1);
%         black = olblacks{i,j};
        black = InputA(i:i+B-1,j:j+B-1);
        [U, S, V] = svd(black);
        sig = diag(S);
        sz=size(sig);
        A(sub2ind([height width], i , j),:) = sig';
        
    end
end


%%

T1 = 0.05;
Ts = 24;
[ordedA, idx]=sortrows(A);
r=1;
for u=1:length(idx)
   for v = u+1:length(idx)
        D = norm(ordedA(u,:)-ordedA(v,:));
        disp(D)
        if D < T1
            [i, j]=ind2sub([height width],idx(u));
            [k, l]=ind2sub([height width],idx(v));
            Cuv = max(abs(i-k),abs(j-l));%Chebyshev distance
            if Cuv >= Ts
                InputA(i:i+B-1,j:j+B-1) = ones(B)*255;
                InputA(k:k+B-1,l:l+B-1) = ones(B)*128;
            end
        end
   end
end

%% Scheme-Step3
% 
imshow(InputA)






