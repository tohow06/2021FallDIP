clc
clear all;
close all;

%% 

src = imread('../data/forgery/example.png');
src_gray = rgb2gray(src);
InputA = double(src_gray);
[M, N] = size(InputA);


%% Scheme-Step1. 
%   create overlapping blocks BxB

B = 20; %block size
olblacks = cell(M-B+1,N-B+1);

for i=1:(M-B+1)
    for j=1:(N-B+1)
        olblacks{i,j} = InputA(i:i+B-1,j:j+B-1);
    end
end


%% Scheme-Step2
%   1. Applying svd and Obtaining a reduced Rank approximation
%   2. extracting a singular values feature vector by SVD

EP = 0.975; % reduced Rank approximation threshold

A = zeros((M-B+1),(N-B+1));
for i=1:(M-B+1)
    for j=1:(N-B+1)
        
        black = olblacks{i,j};
        [U, S, V] = svd(black);
        sig = diag(S);
        sz=size(sig);
        
        for ks=1:sz(1)
            err = sum(sig(1:ks));
            if err > (1-EP)*sum(sig)
                k = ks;
                break
            end
        end
        A(i,j) = sig(k);
        
    end
end


%% Scheme-Step3
% 






