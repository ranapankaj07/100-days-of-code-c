#include<stdio.h>
#include<string.h>
enum role
{
ADMIN,USER,GUEST
};
int main()
{
char ch[20];
enum role r;
scanf("%s",ch);
if(strcmp(ch,"ADMIN")==0)
r=ADMIN;
else if(strcmp(ch,"USER")==0)
r=USER;
else
r=GUEST;
switch(r)
{
case ADMIN:
printf("Welcome Admin!");
break;
case USER:
printf("Welcome User!");
break;
case GUEST:
printf("Welcome Guest!");
break;
}
return 0;
}