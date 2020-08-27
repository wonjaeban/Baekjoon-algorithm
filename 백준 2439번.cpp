#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	for(int count=1; count<=n; count++){
		for(int i=1; i<=n-count; i++){
			printf(" ");
		}
			for(int j= n-count; j<n; j++){
				printf("*");
			}
			printf("\n"); 		
	}
	
}
