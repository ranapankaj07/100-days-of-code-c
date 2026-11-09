#include<stdio.h>
int main()
{
char d[20];
scanf("%s",d);
printf("%.2s-Apr-%.4s",d,d+6);
return 0;
}