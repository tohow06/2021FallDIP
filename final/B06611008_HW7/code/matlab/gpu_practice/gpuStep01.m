clc
clearvars;
close all;

%%

a=rand(100, 10000);
b=rand(100, 10000)';
tic
c=a*b;
fprintf('CPU time = %g sec\n', toc);
A=gpuArray(a);		% Put a to GPU's memory
B=gpuArray(b);		% Put b to GPU's memory
tic
C=A*B;				% Multiplication via GPU
fprintf('GPU time = %g sec\n', toc);
c2=gather(C);		% Put C to MATLAB's workspace
fprintf('isequal(c, c2) = %g\n', isequal(c, c2));
fprintf('Mean deviation = %g\n', mean(mean(abs(c-c2))));