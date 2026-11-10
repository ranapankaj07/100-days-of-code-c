#include<stdio.h>
int main()
{
int n,i,product=1;
scanf("%d",&n);
int nums[n],answer[n];
for(i=0;i<n;i++)
scanf("%d",&nums[i]);
for(i=0;i<n;i++)
{
product=1;
for(int j=0;j<n;j++)
{
if(i!=j)
product*=nums[j];
}
answer[i]=product;
}
printf("[");
for(i=0;i<n;i++)
{
printf("%d",answer[i]);
if(i<n-1)
printf(",");
}
printf("]");
return 0;
}