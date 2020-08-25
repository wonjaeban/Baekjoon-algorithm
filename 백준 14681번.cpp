#include<stdio.h>

int main(void){
    int x, y, result;
	scanf("%d %d", &x, &y);
	if(x>0 && y>0){
		result= 1;
	}
	else if(x>0 &&y<0){
		result= 4;
	}
	else if(x<0 && y>0){
		result=2;
	}
	else{
		result=3;
	}
	printf("%d", result);
} 
