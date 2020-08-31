#include<stdio.h>
#define MAX 1001

int a[MAX];

int main(void){
	int c, n;
	int sum=0;
	int count=0;
	double average=0;
	scanf("%d", &c);
	for(int i=0; i<c; i++){
		scanf("%d", &n);
		for(int j=0; j<n; j++){
			scanf("%d", &a[j]);
			sum+=a[j];
	}
		average= (double)sum/n;
		for(int z=0; z<n; z++){
			if(a[z]>average){
				count++;
			}
		}
		printf("%.3f%%\n", (double)count/n*100);
		a[MAX]={0};
		sum=0;
		count=0;
		average=0;
		
	}
}
