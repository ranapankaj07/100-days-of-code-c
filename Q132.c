#include<stdio.h>
enum traffic
{
RED,YELLOW,GREEN
};
int main()
{
enum traffic light;
char ch[20];
scanf("%s",ch);
if(ch[0]=='R')
light=RED;
else if(ch[0]=='Y')
light=YELLOW;
else
light=GREEN;
switch(light)
{
case RED:
printf("Stop");
break;
case YELLOW:
printf("Wait");
break;
case GREEN:
printf("Go");
break;
}
return 0;
}