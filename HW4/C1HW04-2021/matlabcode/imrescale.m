%%
function gs=imrescale(src,K)
    srcm = min(min(src));
    gm=src-srcm;
    gs = K*(gm/max(max(gm)));
end