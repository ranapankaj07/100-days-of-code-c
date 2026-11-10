#include<stdio.h>
int main()
{
int n,i,repeat=-1;
scanf("%d",&n);
int arr[n],seen[1000]={0};
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(seen[arr[i]]==1)
repeat=arr[i];
else
seen[arr[i]]=1;
}
printf("%d",repeat);
return 0;
}