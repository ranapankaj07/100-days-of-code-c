#include<stdio.h>
int main()
{
int n,i,total=0,left=0;
scanf("%d",&n);
int nums[n];
for(i=0;i<n;i++)
{
scanf("%d",&nums[i]);
total+=nums[i];
}
for(i=0;i<n;i++)
{
total-=nums[i];
if(left==total)
{
printf("%d",i);
return 0;
}
left+=nums[i];
}
printf("-1");
return 0;
}