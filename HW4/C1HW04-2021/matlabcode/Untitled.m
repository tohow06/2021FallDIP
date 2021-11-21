M=10;
N=10;

n=2;
D0=20;

for u=1:M
    for v=1:N
        D = sqrt((u-round(M/2))^2+(v-round(N/2))^2);
        H(u,v) = 1/(1+(D/D0)^(2*n));
    end
end

