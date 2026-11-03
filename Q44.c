#include<stdio.h>
int main()
{
int n,i;
float sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i==1)
sum=sum+1;
else
sum=sum+(2*i-1)/(float)(2*i);
}
printf("Approximate sum: %.1f",sum);
return 0;
}