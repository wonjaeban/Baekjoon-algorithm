#include<stdio.h>

int main(void){
	int n;
	int count=1;
	scanf("%d", &n);
	int firstn=n;
	for(int j=1; j<=(2*firstn-1); j++){
	if(count<=firstn){
		for(int i=1; i<=count; i++){
		printf("*");
	}
	}
	else{
		for(int i=1; i<n; i++){
		printf("*");
	}
	n-=1;
	}
	printf("\n");
	count++;
	}
} 
