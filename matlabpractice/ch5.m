%%
clc
clear variables
close all

%%

oritif = Tiff('./DIP3E_CH05_Original_Images/Fig0503 (original_pattern).tif');
ori = read(oritif);
figure
imshow(ori)

figure
imhist(ori)




