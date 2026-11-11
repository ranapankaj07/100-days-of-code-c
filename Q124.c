#include<stdio.h>
int main()
{
FILE *fp1,*fp2;
char source[50],destination[50];
char ch;
printf("Enter source file name: ");
scanf("%s",source);
printf("Enter destination file name: ");
scanf("%s",destination);
fp1=fopen(source,"r");
if(fp1==NULL)
{
printf("Source file not found!");
return 1;
}
fp2=fopen(destination,"w");
if(fp2==NULL)
{
printf("Destination file cannot be created!");
fclose(fp1);
return 1;
}
while((ch=fgetc(fp1))!=EOF)
{
fputc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
printf("File copied successfully to %s",destination);
return 0;
}