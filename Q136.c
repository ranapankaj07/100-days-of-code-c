#include<stdio.h>
#include<string.h>
enum operation
{
ADD,SUBTRACT,MULTIPLY
};
int main()
{
char ch[20];
int a,b;
enum operation op;
scanf("%s%d%d",ch,&a,&b);
if(strcmp(ch,"ADD")==0)
op=ADD;
else if(strcmp(ch,"SUBTRACT")==0)
op=SUBTRACT;
else
op=MULTIPLY;
switch(op)
{
case ADD:
printf("%d",a+b);
break;
case SUBTRACT:
printf("%d",a-b);
break;
case MULTIPLY:
printf("%d",a*b);
break;
}
return 0;
}