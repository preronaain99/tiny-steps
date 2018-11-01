#include<stdio.h>

int main()
{
        int k, carrot = 0, barren = 0;
	int dead = 0, alive = 1;
	scanf("%d", &k);
	int arr[k], a = 5;
	for(int i = 0; i < k; i++){
		scanf("%d", &arr[i]);
		if(arr[i] == 1){
			carrot++;
		}
		else if(arr[i] == 0){
		        barren++;
		}
	        else if (arr[i] != 1 && arr[i] !=0){
		      printf("%d", a );
		break;
		}

		
	}
		
	
	if((carrot) >= 8){
		printf("%d", alive);
	}
	else if ((carrot) < 8){
		printf("%d", dead);
	}
		 
	return 0;
}	
	



