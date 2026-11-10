#include<stdio.h>
#include<string.h>
int main()
{
char s[1000],t[1000];
int i,count[26]={0},flag=1;
scanf("%s%s",s,t);
if(strlen(s)!=strlen(t))
flag=0;
else
{
for(i=0;s[i]!='\0';i++)
{
count[s[i]-'a']++;
count[t[i]-'a']--;
}
for(i=0;i<26;i++)
{
if(count[i]!=0)
{
flag=0;
break;
}
}
}
if(flag)
printf("Anagram");
else
printf("Not Anagram");
return 0;
}