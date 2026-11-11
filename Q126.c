#include<stdio.h>
int main()
{
FILE *fp;
char filename[50],str[100];
printf("Enter filename: ");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf("Error: File does not exist!");
return 1;
}
printf("File opened successfully.\n");
while(fgets(str,sizeof(str),fp)!=NULL)
{
printf("%s",str);
}
fclose(fp);
return 0;
}