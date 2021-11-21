function H=butterfilter(sz, n, D0)
% BUTTERFILTER creater high pass butterworth filter in freqency domain
%   H=butterfilter(sz, n, D0)
%   sz = size of filter
%   n = order of filter, bigger make closer to ideal
%   D0  = cut off frequency
%   

% Designing filter
M = sz(1);
N = sz(2);
u = 0:(M-1);
v = 0:(N-1);
idx = find(u > M/2);
u(idx) = u(idx) - M;
idy = find(v > N/2);
v(idy) = v(idy) - N;
  
% MATLAB library function meshgrid(v, u) returns 
% 2D grid which contains the coordinates of vectors 
% v and u. Matrix V with each row is a copy of v 
% and matrix U with each column is a copy of u 
[V, U] = meshgrid(v, u);
  
% Calculating Euclidean Distance
D = sqrt(U.^2 + V.^2);
  
% determining the filtering mask
H = 1./(1 + (D./D0).^(2*n));

end