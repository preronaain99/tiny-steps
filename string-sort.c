#include<stdio.h>
#include<string.h>
int main()
{
        char arr[] = "Prerona" ;
        char temp;
        int i, j, n;
        n = strlen(arr);
        for(i = 0; i < n ; i++){
                for(j = 0; j < n - i - 1; j++){
                        if(arr[j] > arr[j + 1]){
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
        printf("Sorted list :\n");
        for(i = 0; i < n; i++){
                printf("%c", arr[i]);
        }
        return 0;
}