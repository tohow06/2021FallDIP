%% HW03

clc
clear variables
close all

%% try laplacian
m=imread('./code/data/moon.png');
m = rgb2gray(m);
figure
imshow(m)
h = fspecial('laplacian',0);
r = conv2(m,h);
figure
cr=max(r,0);
cr = imrescale(cr,255);
imshow(cr,[0 255]);


%% try Sobel

t = Tiff('./code/data/Fig1016(a)(building_original).tif');
house = read(t);

figure
imshow(house)

hx=[-1 -2 -1; 0 0 0; 1 2 1];
dhouse = cast(house,'double');
hre = imrescale(dhouse,1);
rm = conv2(hre,hx);
absgx = abs(rm);

figure
imshow(absgx)


hy=[-1 -2 -1; 0 0 0; 1 2 1].';
gy = conv2(hre,hy);
absgy = abs(gy);

figure
imshow(absgy)


figure
M = absgx+absgy;
imshow(M)


%% try Marr-Hildreth
n = 25;
sig = 4;
gf = fspecial('gaussian',n, sig);
% La = fspecial('laplacian',0);
La = [1 1 1; 1 -8 1;1 1 1];

img = imread('./code/data/blackcool.jpg');
img = rgb2gray(img);
img = mean(img, 3);
hre = cast(img,'double');
hre = imrescale(hre,1);
step2 = conv2(conv2(hre,gf,'valid'),La,'valid');

% step2 = conv2(conv2(La,gf),hre);

% no = (860-834)/2+1;
% step2 = step2(no:no+834-1,no:no+1114-1);

step2re = imrescale(step2,255);

figure
imshow(cast(step2re,'uint8'))

f=figure;
hh = axes('Parent',f);
per = 0.04;
bw = zerocrossing(step2,max(max(step2))*per);
im = imshow(bw,'Parent',hh);

% 
% b = uicontrol('Parent',f,'Style','slider','Position',[81,54,419,23],...
%               'value',per, 'min',0, 'max',1);
% bgcolor = f.Color;
% bl1 = uicontrol('Parent',f,'Style','text','Position',[50,54,23,23],...
%                 'String','0','BackgroundColor',bgcolor);
% bl2 = uicontrol('Parent',f,'Style','text','Position',[500,54,23,23],...
%                 'String','1','BackgroundColor',bgcolor);
%             
% b.Callback = @(es,ed) imshow(zerocrossing(step2,max(max(step2))*es.Value),'Parent',im.Parent); 


%%

function gs=imrescale(src,K)
    srcm = min(min(src));
    gm=src-srcm;
    gs = K*(gm/max(max(gm)));
end
%%

function p=zerocrossing(src,thres)
    [m,n] = size(src);
    p = zeros(m-2,n-2);
    for i=2:m-1
        for j=2:n-1
            flag = 0;
            if (src(i,j-1)*src(i,j+1)< 0)
                if abs(src(i,j-1)-src(i,j+1)) > thres
                    flag = 1;
                end
            end
            
            if (src(i-1,j)*src(i+1,j)< 0)
                if abs(src(i-1,j)-src(i+1,j)) > thres
                    flag = 1;
                end
            end
                        
            if (src(i-1,j-1)*src(i+1,j+1)< 0)
                if abs(src(i-1,j-1)-src(i+1,j+1)) > thres
                    flag = 1;
                end
            end    
            
            if (src(i+1,j-1)*src(i-1,j+1)< 0)
                if abs(src(i+1,j-1)-src(i-1,j+1)) > thres
                    flag = 1;
                end
            end
            p(i-1,j-1) = flag;
        end
    end
end

