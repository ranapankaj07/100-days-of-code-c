#include<stdio.h>
int main()
{
int n,i,maxsum,currentsum;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
maxsum=arr[0];
currentsum=arr[0];
for(i=1;i<n;i++)
{
if(currentsum<0)
currentsum=arr[i];
else
currentsum+=arr[i];
if(currentsum>maxsum)
maxsum=currentsum;
}
printf("%d",maxsum);
return 0;
}