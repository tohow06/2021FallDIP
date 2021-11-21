function H=turbufilter(sz, k)
% turbufilter creater turbulence. filter in freqency domain
%   H=turbufilter(sz, k)
%   k  = cut off frequency
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
  
% Calculating Square Euclidean Distance
D = U.^2 + V.^2;
  
% determining the filtering mask
H = exp(-k*D.^(5/6));

end