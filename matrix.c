#include<stdio.h>
void main()
{
        int n, i, j;
        scanf("%d", &n);
        int mat[n][n];
        printf("enter the elements to the matrix:\n");
        for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                        scanf("%d", &mat[i][j]);
                }
        }
        printf("lower triangular matrix values are:");
        for(i = 0; i < n; i++){
                printf("\n");
                for(j = 0; j < n; j++){
                        if(i >= j){
                                printf("%d ", mat[i][j]);
                        }else{
                                printf("\t");
                        }
                     
                }
        }
        printf("\n");
        printf("upper triangular matrix values are:");
        for(i = 0; i < n; i++){
                printf("\n");
                for(j = 0; j < n; j++){
                        if(j >= i){
                                printf("%d ", mat[i][j]);
                        }else{
                                printf("\t");
                        }
                }
        }
       
                          
      
                        
}