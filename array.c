#include<stdio.h>
void main()
{
        int row, col, i, j;
        scanf("%d",&row);
        scanf("%d", &col);
        int arr[10][10], transpose[10][10];
        printf("enter the elements to the array:\n");
        for(i = 0; i < row; i++){
                for(j = 0; j < col; j++){
                        scanf("%d", &arr[i][j]);
                }
        }
        for(i = 0; i < row; i++){
                for(j = 0; j < col; j++){
                        transpose[j][i] = arr[i][j];
                }
        }
        for(i = 0; i < row; i++){
                for(j = 0; j < col; j++){
                        if(arr[i][j] == transpose[j][i])
                        printf("SYMMETRIC");
                        else
                        break;
                }
        }
}
                       




