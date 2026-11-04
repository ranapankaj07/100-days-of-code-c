
#include<stdio.h>
int main()
{
    long long n;
    int a[10]={0},digit,i,max=0;
    scanf("%lld",&n);
    if(n<0)
        n=-n;
    if(n==0)
        a[0]=1;
    while(n>0)
    {
        digit=n%10;
        a[digit]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            digit=i;
        }
    }
    printf("%d",digit);
    return 0;
}
