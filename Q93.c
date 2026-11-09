#include<stdio.h>
int main()
{
char a[100],b[100];
int i,count[256]={0},flag=1;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
count[(unsigned char)a[i]]++;
for(i=0;b[i]!='\0';i++)
count[(unsigned char)b[i]]--;
for(i=0;i<256;i++)
{
if(count[i]!=0)
{
flag=0;
break;
}
}
if(flag==1)
printf("Anagrams");
else
printf("Not anagrams");
return 0;
}