#include<stdio.h>
#include<string.h>

int main()
{
        char str[50];
        printf("enter the string:");
        gets(str);
        int i = 0, sum = 1, ch = 0;
        char store_char[50];
        int len = strlen(str); 
        for( i = 0; i < len; i++ ) {
                if( str[i] == str[i + 1] ) {
                        sum++;
                } else {
                        store_char[ch] = sum + 48;
                        store_char[ch + 1] = str[i];
                        ch += 2;        
                        sum = 1;
                }
        }      
        store_char[ch] = '\0';
        printf("%s\n", store_char);
        return 0;
}       

        
