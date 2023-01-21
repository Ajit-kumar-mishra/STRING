#include <stdio.h>
#include <string.h>
 
int  main()
{
    char name[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s",&name);
    for (i = 0;name[i] != '\0';i++)
    {
        if(name[i] == ' ' && name[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}