#include<stdio.h>
int main()
{
char s[100];
int i=0,sp=0,d=0,special=0;
fgets(s,100,stdin);
while(s[i]!='\0')
{
if(s[i]==' ')
sp++;
else if(s[i]>='0'&&s[i]<='9')
d++;
else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='\n'))
special++;
i++;
}
printf("Spaces=%d, Digits=%d, Special=%d",sp,d,special);
return 0;
}