#include<stdio.h>

char a[101];

int main(void){
	int n;
	int sum=0; 
	int convert=0;
	scanf("%d", &n);
	scanf("%s", a);
	for(int i=0; i<n; i++){
		convert=a[i]-'0';
		sum+=convert;
	}
	
	printf("%d", sum);
}
