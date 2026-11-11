#include<stdio.h>
enum months
{
JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};
int main()
{
enum months m;
char ch[10];
scanf("%s",ch);
switch(ch[0])
{
case 'J':
if(ch[1]=='A')
printf("31 days");
else if(ch[1]=='U'&&ch[2]=='N')
printf("30 days");
else
printf("31 days");
break;
case 'F':
printf("28 or 29 days");
break;
case 'M':
if(ch[2]=='R')
printf("31 days");
else
printf("31 days");
break;
case 'A':
if(ch[1]=='P')
printf("30 days");
else
printf("31 days");
break;
case 'S':
case 'N':
printf("30 days");
break;
case 'O':
case 'D':
printf("31 days");
break;
}
return 0;
}