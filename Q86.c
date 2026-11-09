#include<stdio.h>
int main()
{
char s[100];
int i=0,j=0,flag=1;
scanf("%s",s);
while(s[i]!='\0')
i++;
j=i-1;
for(i=0;i<j;i++,j--)
{
if(s[i]!=s[j])
{
flag=0;
break;
}
}
if(flag==1)
printf("Palindrome");
else
printf("Not palindrome");
return 0;
}