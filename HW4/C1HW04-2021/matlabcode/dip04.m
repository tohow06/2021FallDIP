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
bo = im2double(book);
B = fft2(bo);
Bc = fftshift(B);
a = 0.1;
b = 0.1;
T=1;
[M, N] = size(B);

% generating H
% puavb is different from book
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

% H = fftshift(H);
% BH = B.*H;
% bh = ifft2(BH);
BH = Bc.*H;
bh = ifft2(BH);

figure, imshow(book,[])
figure, imshow(abs(bh),[])

%% use inverse filter

% figure 5.25 b Modeling turbulence
book = imread('../Fig0526(a)(original_DIP).tif');
bo = im2double(book);
B = fft2(bo);
Bc = fftshift(B);
tbf = turbufilter(size(Bc),0.0025);
tbf = fftshift(tbf);
BcH = Bc.*tbf;
btb = ifft2(BcH);
figure, imshow(book,[])
figure, imshow(abs(btb),[])


bwf=butterfilter(size(bo),10,20);
bwfc=fftshift(bwf);
AH = fft2(btb);
% Ac = AH./tbf;
Ac = AH./(tbf.*bwfc);
% Ac = fftshift(Ac); %unnecessary
a = ifft2(Ac);

figure, imshow(a,[])


%% trying deconvwnr learning from DIPUM3rd
% but deconvwnr using PSF(point-spread function),AKA h
% and the degradation function we usually create was in frequency domain
% which is sometimes called Optical transfer function (OTF), AKA H(u,v)

arest = deconvwnr(a, ifft2(tbf),0);
figure, imshow(arest,[]);

%% inverse fourier degradation function and convolution in spatial domain
% but the result didn't match my except
% and the conv2 will consume a lot of time


figure, imshow(bo,[])

h = ifft2(fftshift(tbf));
psf = otf2psf(tbf);
blurred = conv2(bo, psf);
figure, imshow(blurred,[])

%% add noise

book = imread('../Fig0526(a)(original_DIP).tif');
bo = im2double(book);
bon = imnoise(bo, 'gaussian',0,400/255/255);
figure, imshow(bon)
%%

sig = 20;
m = 0;
z = 0:255;
Pz = 1/sqrt(2*pi)/sig*exp(-(z-m).^2./2./sig./sig);


%%

a = [1+1i 2+1i 3+2i 4+2i 5+3i 6+3i 7+4i 8+4i 9+5i];
b = [2+1i 2+1i 2+1i 2+1i 2+1i 2+1i 2+1i 2+1i 2+1i];
ab=a.*b;






