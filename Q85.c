#include<stdio.h>
int main()
{
char s[100],t;
int i=0,j=0;
scanf("%s",s);
while(s[i]!='\0')
{
i++;
}
j=i-1;
for(i=0;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("%s",s);
return 0;
}