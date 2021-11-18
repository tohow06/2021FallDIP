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

%center spectrum
reS = imrescale(S,255);
reS = cast(reS,'uint8');
figure, imshow(reS)

%log center spectrum
logS = log(1+S);
relogS = imrescale(logS,255);
relogS = cast(relogS,'uint8');
figure, imshow(relogS)

%phase angle
P=angle(F);
reP = imrescale(P,255);
reP = cast(reP,'uint8');
figure, imshow(reP)


%% inverse

%inverse fourier
jf=ifft2(F);
figure, imshow(jf)

%inverse centered fourier
jfc=ifft2(Fc);
figure, imshow(jfc)

%comparision
figure, imshowpair(jf,jfc,'diff')

%% fftshift iffshift

% iffshift == fftshift when signal's size is even
a = [1 2 3 4 5 6 7 8 9 10];
ac = fftshift(a);
acc = fftshift(ac);



%% characters_test_pattern

cha = imread('./DIP3E_Original_Images_CH04/Fig0441(a)(characters_test_pattern).tif');
imshow(cha)











