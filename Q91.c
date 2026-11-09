#include<stdio.h>
int main()
{
char s[100];
int i=0,j=0;
scanf("%s",s);
while(s[i]!='\0')
{
if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
{
s[j]=s[i];
j++;
}
i++;
}
s[j]='\0';
printf("%s",s);
return 0;
}