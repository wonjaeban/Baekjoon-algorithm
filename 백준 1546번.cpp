#include<iostream>
#include<algorithm>
#define MAX 1001

using namespace std;
int a[MAX];

int main(void){
	int n;
	double sum=0;
	double result=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	for(int i=0; i<n; i++){
	sum+=(double)a[i]/a[n-1]*100;	
	}
	result= (double)sum/n;
	printf("%.2f", result);
	
}
