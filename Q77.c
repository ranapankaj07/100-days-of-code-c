#include<stdio.h>
int main()
{
int r,c,i,j,flag=1;
scanf("%d%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<r;i++)
{
for(j=i+1;j<r;j++)
{
if(a[i][i]==a[j][j])
flag=0;
}
}
if(flag==1)
printf("True");
else
printf("False");
return 0;
}