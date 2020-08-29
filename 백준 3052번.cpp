#include<stdio.h>

int a[10];
int b[42];
int main(void){
	int count=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<10; j++){
	 for(int i=0; i<42; i++){
		 if(i==a[j]%42){
		 	b[i]++;
		 }
	}
	}
	for(int i=0; i<42; i++){
		if(b[i]!=0){
			count++;
		}
	}
	printf("%d", count);
	
	
}
