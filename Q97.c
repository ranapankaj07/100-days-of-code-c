#include<stdio.h>
int main()
{
char s[100];
int i=0;
fgets(s,100,stdin);
while(s[i]!='\0')
{
if(i==0||s[i-1]==' ')
printf("%c.",s[i]);
while(s[i]!=' '&&s[i]!='\0')
i++;
if(s[i]==' ')
i++;
}
return 0;
}