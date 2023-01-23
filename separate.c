#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int l=0;
    printf("enter your name:\n");
    scanf("%[^\n]s",&name);
   printf("now we are going to show you your name seperate by space\n");
  while(name[l]!='\0')
  {
    printf("%c ",name[l]);
    l++;
  }
    return 0;
}