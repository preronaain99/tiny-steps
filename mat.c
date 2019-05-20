#include<stdio.h>
#include<math.h>
int main()
{
        int m, n, i, j, k, p, q, sum = 0;
        printf("enter the number of rows of  matrix:\n");
        scanf("%d", &m);
        printf("enter the number of columns of matrix:\n");
        scanf("%d", &n);
        int a[m][n], b[m][n], c[m][n];
        printf("enter the elements of the first matrix:\n");
        for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                        scanf("%d", &a[j][n]);
                }
        }
        printf("enter the number of rows of the second matrix :\n");
        scanf("%d", &p);
        printf("enter the number of columns of the second matrix :\n");
        scanf("%d", &q);
        if(n != p)
        printf("matrix multiplication not possible");
        else{
        printf("enter the elements of the second matrix:\n");
        for(i = 0; i < p; i++){
                for(j = 0; j < q; j++){
                        scanf("%d", &b[i][j]);
                }
        }
        for(i = 0; i < m; i++){
                for(j = 0; j < q; j++){
                       
                        for(k = 0; k < p; k++){
                        sum  += c[i][j] + a[i][k] * b[k][j];
                }
        }
        }
        c[i][j] = sum;
        
        
                for(i = 0; i < m; i++){
                        for(j = 0; j <= q; j++){
                        printf(" %d ", c[i][j]);
                }
                }
                printf("\n");
        }
                return 0;

        }



