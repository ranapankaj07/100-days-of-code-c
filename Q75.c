#include<stdio.h>
int main()
{
int r,c,i,j;
scanf("%d%d",&r,&c);
int a[r][c],b[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",a[i][j]+b[i][j]);
if(j<c-1)
printf(" ");
}
printf("\n");
}
return 0;
}