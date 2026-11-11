#include<stdio.h>
#include<ctype.h>
int main()
{
FILE *fp;
char ch;
int characters=0,words=0,lines=0,inword=0;
fp=fopen("sample.txt","r");
if(fp==NULL)
{
printf("File not found!");
return 1;
}
while((ch=fgetc(fp))!=EOF)
{
characters++;
if(ch=='\n')
lines++;
if(isspace(ch))
inword=0;
else if(inword==0)
{
words++;
inword=1;
}
}
if(characters>0)
lines++;
fclose(fp);
printf("Characters: %d\n",characters);
printf("Words: %d\n",words);
printf("Lines: %d",lines);
return 0;
}