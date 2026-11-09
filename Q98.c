#include<stdio.h>
int main()
{
char s[100];
int i=0,j=0;
fgets(s,100,stdin);
while(s[i]!='\0')
{
if(s[i]=='\n')
s[i]='\0';
i++;
}
i=0;
while(s[i]!='\0')
{
if(s[i+1]==' '||s[i+1]=='\0')
{
if(s[i+1]==' ')
printf("%c.",s[j]);
else
printf("%s",&s[j]);
j=i+2;
}
i++;
}
return 0;
}