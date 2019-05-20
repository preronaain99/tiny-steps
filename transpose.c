#include<stdio.h>
#include<math.h>
#define ROW 3
#define COLUMN 3
void transpose(int b[ROW][COLUMN], int a[ROW][COLUMN])
{
        int i, j;
        for(i = 0; i < ROW; i++){
                for(j = 0; j < COLUMN; j++){
                        b[j][i] = a[i][j];
                }
        }
        printf("%d\t", b[j][i]);
}
int main()
{
        int i, j;
        int a[ROW][COLUMN], b[ROW][COLUMN];
        printf("enter the elements of the matrix:");
        for(i = 0; i < ROW; i++){
                for(j = 0; j < COLUMN; j++){
                        scanf("%d", &a[i][j]);
                }
        }
        transpose(a[ROW][COLUMN], b[ROW][COLUMN]);
        for(i = 0; i < ROW; i++){
                for(j = 0; j < COLUMN; j++){
                        if(a[i][j] == -b[j][i])
                        printf("skew symmetric");
                        else
                        printf("not skew symmetric");
                }
        }
        return 0;


}