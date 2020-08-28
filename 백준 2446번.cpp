#include<stdio.h>

int main(void){
	int n;
	int count=0;
	scanf("%d", &n);
	for(int j=1; j<=(2*n-1); j+=2){
			if(count!=0){
				for(int k=1; k<=count; k++){
					printf(" ");
				}
			}
		for(int i=j; i<=(2*n-1); i++){
			printf("*");
		}
		printf("\n");
		if(j!=(2*n-1)){
			count++;
		}
		else{
			count--;
		}
	}
	for(int j=3; j<=(2*n-1); j+=2){
		if(count!=0){
				for(int k=1; k<=count; k++){
					printf(" ");
				}
			}
		for(int i=1; i<=j; i++){
			printf("*");
		}
		printf("\n");
		count--;
	}
	}
