#include<stdio.h>

void primefactors(int m)
{
	int i;
	for(i = 2; m > 1; i++){
		while(m % i == 0){
			m = m / i;
			printf("%d ", i);
		}
	}
}

void main()
{
	int i, m, arr[50];
	scanf("%d", &m);
	for(i = 0; i < m; i++){
		scanf("%d", &arr[i]);
	}


	//bad practice sorry//dint say sorry when you dont know dynamic allocation
	for(i = 0; i < m; i++){
		/*call prime factor function*/
		primefactors(arr[i]);
		printf("\n");
	}
}
	







