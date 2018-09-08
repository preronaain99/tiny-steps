 #include<stdio.h>

 void main()
 {
	int n, i ;
	printf("enter a number :");
	scanf("%d", &n);
	for(i = 2; n > 1; i++){
		while(n % i == 0){
			n = n / i;
			printf("%d ", i);
		}
	}
 }
 

     
      
         
         

        














