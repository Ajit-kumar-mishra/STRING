#include<stdio.h>
#include<string.h>
int main()
{
    char name[100] = "ajit kumar mishra";
    printf("enter your name:\n");
    scanf("%[^\n]s",&name);
  int length = strlen(name);
  printf("Name length: %u", length);
    return 0;
}