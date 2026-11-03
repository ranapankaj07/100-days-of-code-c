#include<stdio.h>
int main()
{
int n,first,last,div=1,temp;
scanf("%d",&n);
temp=n;
last=n%10;
while(temp>=10)
{
temp=temp/10;
div=div*10;
}
first=temp;
n=n%div;
n=n/10;
printf("%d",last*div+n*10+first);
return 0;
}