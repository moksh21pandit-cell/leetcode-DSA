bool isPalindrome(int x) {
    int a=x;
    long long r=0;
    if(x<0)
    return(false);
    else
    {
        while(a>0)
        {
            r=r*10+a%10;
            a=a/10;
        }
        if(x==r)
        return true;
        else
        return false;
    }

}