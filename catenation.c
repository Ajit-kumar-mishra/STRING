#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int name1[100],name2[100];
    printf("enter text:\n");
    gets(name1);
    printf("enter text:2\n");
    gets(name2);
    printf("now you will see the adding two text in one strings\n");
    strcat(name1,name2);
    printf("%s",name1);
    return 0;
}