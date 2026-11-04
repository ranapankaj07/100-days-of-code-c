#include<stdio.h>
int main()
{
int r,c,i,j;
scanf("%d%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(int k=0;k<r+c-1;k++)
{
if(k%2==0)
{
for(i=k;i>=0;i--)
{
j=k-i;
if(i<r&&j<c)
printf("%d ",a[i][j]);
}
}
else
{
for(j=k;j>=0;j--)
{
i=k-j;
if(i<r&&j<c)
printf("%d ",a[i][j]);
}
}
}
return 0;
}