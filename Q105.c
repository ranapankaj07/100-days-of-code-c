#include<stdio.h>
int main()
{
int n,i,count=0,candidate;
scanf("%d",&n);
int nums[n];
for(i=0;i<n;i++)
scanf("%d",&nums[i]);
candidate=nums[0];
for(i=0;i<n;i++)
{
if(count==0)
candidate=nums[i];
if(nums[i]==candidate)
count++;
else
count--;
}
count=0;
for(i=0;i<n;i++)
{
if(nums[i]==candidate)
count++;
}
if(count>n/2)
printf("%d",candidate);
else
printf("-1");
return 0;
}