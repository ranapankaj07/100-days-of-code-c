#include<stdio.h>
#include<string.h>
int main()
{
char s[1000];
int i,j,len,max=0,count;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
count=0;
int seen[256]={0};
for(j=i;j<len;j++)
{
if(seen[(unsigned char)s[j]]==1)
break;
seen[(unsigned char)s[j]]=1;
count++;
}
if(count>max)
max=count;
}
printf("%d",max);
return 0;
}