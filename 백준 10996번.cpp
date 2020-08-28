#include<stdio.h>

int main(void){
	int n;
	int count=1; 
	scanf("%d", &n);
	if(n==1){
		printf("*");
	}
	else{
	for(int i=0; i<2*n; i++){
		if(count%2!=0){
		for(int j=0; j<n; j++){
			if(j%2==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		} count++;
		}
		else{
			for(int j=0; j<n; j++){
			if(j%2==0){
				printf(" ");
			}
			else{
				printf("*");
			}
		} count++;
			
		}
		printf("\n");
		
	}
}
}
