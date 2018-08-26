#include<stdio.h>
void main()
{
	int i,j,rows,columns,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of rows and columns of the matrix:");
	scanf("%d%d",&rows,&columns);
	printf("enter the elements of the first matrix:");
	for(i = 0;i < rows;i++)
	  for(j = 0;j < columns;j++)
	  {
		  scanf("%d", &first[i][j]);
	  }
	printf("enter the elements of the second matrix:");
	for(i = 0;i < rows;i++)
	  for(j = 0;j < columns;j++)
	  {
		  scanf("%d", &second[i][j]);
	  }
	  printf("the summation of the two matrix is :\n");
	  for(i= 0 ;i < rows;i++){
		for(j = 0;j < columns;j++){
			sum[i][j] = first[i][j] + second[i][j];

			printf("%d\t", sum[i][j]);
		}

			printf("\n");
	  }
}