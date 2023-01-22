#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[100];
    int l=0;
    printf("enter your name:\n");
    scanf("%[^\n]s",&name);
    l=strlen(name);
   printf("now we are going to show you your name in reverse order\n");
   for(name[l]='\0';l>=0;l--)
   {
   printf("%c ",name[l]);
   }
    return 0;
}