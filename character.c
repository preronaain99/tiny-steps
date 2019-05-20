#include<stdio.h>
#include<string.h>
void main()
{
        char s1[] = "It is good to program in PASCAL language";
        char s2[] = "PASCAL";
        char *p;
        p = strstr(s1,s2);
        if(p){
        strcpy(p, "C");
        printf("%s", s1);
        }
        else
        printf("\nString not found");
}