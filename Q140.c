#include<stdio.h>
#include<string.h>
enum Gender
{
MALE,FEMALE
};
struct Person
{
enum Gender gender;
};
int main()
{
struct Person p;
char ch[20];
scanf("%s",ch);
if(strcmp(ch,"MALE")==0)
p.gender=MALE;
else
p.gender=FEMALE;
if(p.gender==MALE)
printf("Male");
else
printf("Female");
return 0;
}