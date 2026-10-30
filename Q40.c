#include<stdio.h>
int main()
{
int n,r,rev=0,p=1;
scanf("%d",&n);
while(n>0)
{
r=n%10;
if(r==0)
r=1;
else
r=0;
rev=rev+r*p;
p=p*10;
n=n/10;
}
printf("%d",rev);
return 0;
}