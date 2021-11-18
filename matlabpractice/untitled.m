clc
clear variables
close all



gf = [0.1088    0.1123    0.1088;
    0.1123    0.1158    0.1123;
    0.1088    0.1123    0.1088;];
la = [0 -1 0;-1 4 -1;0 -1 0];

a = ones(10);
b = la;

c=conv2(a,b)
cs=conv2(a,b,'same')



%%
% https://www.mathworks.com/matlabcentral/answers/278353-2d-convolution-algorithm-error-vs-conv2-function
[m,n] = size(a);
[m1,n1] = size(b);
mn = [m,n] + 2*([m1,n1]-1);
a0 = zeros(mn);
a0(m1:(end-m1+1),n1:(end-n1+1)) = a;
b1 = rot90(b,2);
b2 = b1(:);
out = zeros(m1+m-1,n+n1-1);
for ii = 1:mn(1)-m1+1
    for jj =  1:mn(2)-n1+1
        x = a0(ii:ii+m1-1,jj:jj+n1-1);
        out(ii,jj) = x(:)'*b2;
    end
end



%% 

g = fspecial('gaussian', 3,1)
l = [0 -1 0; -1 4 -1 ; 0 -1 0];
log = conv2(g,l);

%%

a = [1 2 4];
b = [2; 4];
c = conv2(a,b)
d = conv2(a,b,'valid')







