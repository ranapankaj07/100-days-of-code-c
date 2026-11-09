#include<stdio.h>
int main()
{
char a[100],b[100],c[200];
int i,j=0,flag=0;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
{
c[j]=a[i];
j++;
}
for(i=0;a[i]!='\0';i++)
{
c[j]=a[i];
j++;
}
c[j]='\0';
for(i=0;c[i]!='\0';i++)
{
if(c[i]==b[0])
{
for(j=0;b[j]!='\0';j++)
{
if(c[i+j]!=b[j])
break;
}
if(b[j]=='\0')
{
flag=1;
break;
}
}
}
if(flag==1)
printf("Rotation");
else
printf("Not rotation");
return 0;
}