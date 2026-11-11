#include<stdio.h>
enum color
{
RED,YELLOW,GREEN
};
int main()
{
char *name[]={"RED","YELLOW","GREEN"};
int i;
for(i=RED;i<=GREEN;i++)
{
printf("%s=%d\n",name[i],i);
}
return 0;
}