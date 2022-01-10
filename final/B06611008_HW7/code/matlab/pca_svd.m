clc
clearvars
close all;

%%

X = randi([0 5],3,3);

mX = mean(X,2);

B = X - mX*ones(1,3);