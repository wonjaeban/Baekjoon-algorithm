#include<stdio.h>

int main(void){
	int a, b, result1, result2, result3, result4;
	scanf("%d %d", &a, &b);
	result1= a*b;
	result2= (result1/a%100%10) * a;
	result3= (result1/a%100/10) * a;
	result4= (result1/a/100) * a;
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result4);
	printf("%d\n", result1);
} 
