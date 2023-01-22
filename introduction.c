#include<stdio.h>
#include<string.h>
int main()
{
    char name[40];
    puts("enter your name:");
    scanf("%[^\n]s",name);
    printf("%s",name);
    return 0;
}