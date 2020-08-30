int countingValleys(int n, string s) {
    int lvl=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U') lvl++;
        if(s[i]=='D') lvl--;
    
    if(s[i]=='U' && lvl==0)
    c++;
    }
return c;
}
