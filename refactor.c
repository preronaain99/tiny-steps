#include<stdio.h>

int main()
{
        int k, carrot = 0, barren = 0;
	int dead = 0, alive = 1;
        int valid = 1;
	scanf("%d", &k);
	int arr[k], a = 5;
	for(int i = 0; i < k; i++){
		scanf("%d", &arr[i]);
                if(arr[i] != 1 && arr[i] != 0){
                        valid = 0;
                        break;
                }
        }
        printf("%d", a);
        if(valid == 1){
                for(int i = 0; i < k; i+=2){
                        if(arr[i] == 1){
			carrot++;
		}
        }
                if((carrot) >= 8){
                        printf("%d", alive);
                } else{
                        printf("%d", dead);
                }
                
        }
}
		
        

                
	        
        
                

                