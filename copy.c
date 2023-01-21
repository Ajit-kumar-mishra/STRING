#include<stdio.h>
#include<string.h>
#include<stdlib.h>   
int main()
{
    int name1[100],name2[100];
    printf("enter text: 1 \n");
    gets(name1);
    printf("enter text: 2 \n");
    gets(name2);
    strcpy(name1,name2);
    printf("strcpy:%s\n",name1);
    return 0;

}