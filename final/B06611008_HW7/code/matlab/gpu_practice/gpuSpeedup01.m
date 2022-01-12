clc
clear all;
close all;

%%
fprintf('computer = %s\n', computer);
fprintf('version = %s\n', version);
% Speed test
step=10000;
colCounts=step*(1:1:20);
for i=1:length(colCounts)
	fprintf('%d/%d\n', i, length(colCounts));
	n=colCounts(i);
	a=rand(100, n);
	b=rand(100, n)';
	myTic=tic; c=a*b; cpuTime(i)=toc(myTic);
	A=gpuArray(a);
	B=gpuArray(b);
	myTic=tic; C=A*B; gpuTime(i)=toc(myTic);
end
subplot(211); plot(colCounts, cpuTime, '.-', colCounts, gpuTime, '.-');
legend('CPU time', 'GPU time', 'location', 'northwest');
title('CPU & GPU time');
ylabel('Time (sec)');
subplot(212); plot(colCounts, cpuTime./gpuTime, 'o-');
title('GPU speedup ratio');
ylabel('Ratios');
xlabel('No. of columns');