#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name1[100],name2[100];
    printf("enter the first string:\n");
    gets(name1);
    printf("enter the second string:\n");
    gets(name2);
    int result = strcmp(name1,name2);
    printf("result is:%d\n",result);
    if(result==0)
    puts("strings are equal");
    else
    puts("strings are not equal");
    return 0;
    
}