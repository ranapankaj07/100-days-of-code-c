#include<stdio.h>
#include<string.h>
enum status
{
SUCCESS,FAILURE,TIMEOUT
};
int main()
{
char str[20];
enum status s;
scanf("%s",str);
if(strcmp(str,"SUCCESS")==0)
s=SUCCESS;
else if(strcmp(str,"FAILURE")==0)
s=FAILURE;
else
s=TIMEOUT;
switch(s)
{
case SUCCESS:
printf("Operation successful");
break;
case FAILURE:
printf("Operation failed");
break;
case TIMEOUT:
printf("Operation timed out");
break;
}
return 0;
}