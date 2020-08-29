#include<iostream>
#include<algorithm>
#define MAX 1000001

using namespace std; 



int main(void){
	int n;
	int a[MAX]={0};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	printf("%d %d", a[0], a[n-1]);
}
