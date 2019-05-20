#include<stdio.h>

void main()
{
        char str1[100], str2[100], i;
        printf("enter a string : ");
        scanf("%s", str1);
        for(i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
        str2[i] = '\0';
        printf("\n");
        printf("%s\n", str2);
        printf("Number of characters = %d\n", i);
}