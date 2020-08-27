#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	for(int count=1; count<=n; count++){
		for(int j=1; j<=count; j++){
			printf("*");
		}
		printf("\n");
		
	}
}
