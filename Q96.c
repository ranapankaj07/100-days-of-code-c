#include<stdio.h>
int main()
{
char s[200],t;
int i=0,j,start;
fgets(s,200,stdin);
while(s[i]!='\0'&&s[i]!='\n')
{
start=i;
while(s[i]!=' '&&s[i]!='\0'&&s[i]!='\n')
i++;
j=i-1;
while(start<j)
{
t=s[start];
s[start]=s[j];
s[j]=t;
start++;
j--;
}
if(s[i]==' ')
i++;
}
printf("%s",s);
return 0;
}