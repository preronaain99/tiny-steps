#include<stdio.h>
#include<string.h>

int main()
{
        char str[10]={'a', 'a', 'a', 'a', 'b', 'b', 'c', 'd', 'd', '\0'};
        int i = 0, sum = 1, j = 0;
        char a[50];
        int len = strlen(str); 
        for( i = 0; i < len; i++ ) {
                if( str[i] == str[i + 1] ) {
                        sum++;
                } else {
                        a[j] = sum + 48;
                        a[j + 1] = str[i];
                        j += 2;        
                        sum = 1;
                }
        }        
        a[j] = '\0';
        for(i = 0; str[i++] != '\0'; ){
                printf("%c", a[i]);
        }
        return 0;
}