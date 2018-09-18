#include<stdio.h>

int main()
{
        int k, carrot = 1, barren = 0;
	int dead = 0, alive = 1;
	scanf("%d", &k);
	int arr[k], a = 5;
	int hop = k / 2;
	while(k >=20 && hop >= 10){
		for(int i = 0; i < k; i++){
			scanf("%d", &arr[i]);
			if(arr[i] = carrot){
			        carrot++;
			}
		        else if(arr[i] = barren){
			        barren++;
			}
		        else if (arr[i] != 1 || arr[i] !=0){
			        printf("%d", a );
			}
		}
		
	}
	if((carrot++) >= 8){
		printf("%d", alive);
	}
	else if ((carrot++) < 8){
		printf("%d", dead);
	}
	return 0;
}	
	



