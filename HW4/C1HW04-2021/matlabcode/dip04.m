%%

clc 
close all
clear variables


%% 

img = imread('./DIP3E_Original_Images_CH04/Fig0424(a)(rectangle).tif');
imshow(img)

%% 

Y = fft2(img);
sY = fftshift(Y);
spec = abs(sY).^2;

figure
imshow(imrescale(spec, 255))

% figure
% imshow(imrescale(abs(Y).^2, 255))
% figure
% imshow(imrescale(abs(fftshift(Y)).^2, 255))
% figure
% imshow(imrescale(1+log(abs(fftshift(Y)).^2),255))







%%
function gs=imrescale(src,K)
    srcm = min(min(src));
    gm=src-srcm;
    gs = K*(gm/max(max(gm)));
end
