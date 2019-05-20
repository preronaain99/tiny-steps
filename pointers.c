#include<stdio.h>
void main()
{
        int n, i, j, swap;
        scanf("%d", &n);
        int arr[n];
        for(i = 0; i < n; i++){
                scanf("%d", &arr[i]);
        }
        for(i = 0; i < n; i++){
                for(j = 0; j < n - i - 1; j++){
                        if(*(arr + i) > *(arr + j)){
                                swap = *(arr + i);
                                *(arr + i) = *(arr + j);
                                *(arr + j) = swap;
                        }
                }
        }
        printf("The sorted array is :\n");
        for(i = 0; i < n; i++){
                printf("%d ", *(arr + i));
        }
}