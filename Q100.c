#include<stdio.h>
int main()
{
char s[100];
int i,j,k,first=1;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
for(j=i;s[j]!='\0';j++)
{
if(!first)
printf(",");
for(k=i;k<=j;k++)
printf("%c",s[k]);
first=0;
}
}
return 0;
}