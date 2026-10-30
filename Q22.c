#include<stdio.h>
int main()
{
float cp,sp,p,l;
scanf("%f%f",&cp,&sp);
if(sp>cp)
{
p=((sp-cp)/cp)*100;
printf("Profit %.0f%%",p);
}
else if(cp>sp)
{
l=((cp-sp)/cp)*100;
printf("Loss %.0f%%",l);
}
else
printf("No Profit No Loss");
return 0;
}