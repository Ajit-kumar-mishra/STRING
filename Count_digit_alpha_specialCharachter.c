#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[100];
    int i=0,digit=0,specialcharachter=0,alphabate=0;
    printf("enter the text:\n");
    scanf("%[^\n]s",&name);
    while(name[i]!='\0')
    {
    if(name[i]>='a' && name[i]<='z'|| name[i]>='A' && name[i]<='Z')
    {
        alphabate++;
    }
    else if(name[i]>='0' && name[i]<='9')
    {
        digit++;
    }
    else
    {
        specialcharachter++;
    }
    i++;
}
    printf("Number of Alphabets in the string is : %d\n", alphabate);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", specialcharachter);
    return 0;
}