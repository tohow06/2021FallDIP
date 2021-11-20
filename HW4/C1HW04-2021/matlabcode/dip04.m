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


%% homomorphic filtering

pet = imread('./DIP3E_Original_Images_CH04/Fig0462(a)(PET_image).tif');
imshow(pet)


pet=cast(pet,'double');
logp = log2(pet);
logP = fft2(logp);

%% multiply in freq domain

a=[1 2 3];
b=[1+1i 1+1i 1+1i];
A=fft(a); 
% A = [6 -1.5+0.866i -1.5-0.866i];
AB =  A.*b;

%% motion blurred

book = imread('../Fig0526(a)(original_DIP).tif');
b = im2double(book);
B = fft2(b);
Bc = fftshift(B);
a = 0.1;
b = 0.1;
T=1;
[M, N] = size(B);

% generating H
% puavb不能全照課本的公式
H = zeros(M, N);
center_u = M/2+1;
center_v = N/2+1;
for u = 1:M
    for v = 1:N
        puavb = pi*((u-center_u)*a + (v-center_v)*b);
%         puavb = pi*(u*a + v*b);
        if puavb == 0
            puavb = 0.000000000001;
        end
        
        H(u,v) = (T/(puavb))*sin(puavb)*exp(-1i*puavb);
        
        if puavb==0
            disp(H(u,v))
        end
    end
end

H = fftshift(H);
BH = B.*H;
bh = ifft2(BH);

figure, imshow(book,[])
figure, imshow(bh,[])

% use inverse filter

a = fft2(bh);
adh = a./H;
out = ifft2(adh);
figure, imshow(out, [])











