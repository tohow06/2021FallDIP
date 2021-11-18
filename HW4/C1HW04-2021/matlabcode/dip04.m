%%

clc 
close all
clear variables


%% 

f = imread('./DIP3E_Original_Images_CH04/Fig0424(a)(rectangle).tif');
imshow(f)
% imwrite(img,'rectangle.jpg');

%% rectangle

% PQ = paddedsize(size(f));
% F = fft2(f,PQ(1),PQ(2));
F = fft2(f);
Fc = fftshift(F);
S = abs(Fc);

reS = imrescale(S,255);
reS = cast(reS,'uint8');
figure, imshow(reS)

logS = log(1+S);
relogS = imrescale(logS,255);
relogS = cast(relogS,'uint8');
figure, imshow(relogS)


P=angle(F);
reP = imrescale(P,255);
reP = cast(reP,'uint8');
figure, imshow(reP)


%% characters_test_pattern

cha = imread('./DIP3E_Original_Images_CH04/Fig0441(a)(characters_test_pattern).tif');
imshow(cha)











