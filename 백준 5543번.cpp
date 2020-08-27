#include<iostream>
#include<algorithm> 

using namespace std;

int main(void){
	int a[3]={0};
	int b[2]={0};
	int result=0;
	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<2; i++){
		scanf("%d", &b[i]);
	}
	sort(a, a+3);
	sort(b, b+2);
	result = a[0]+b[0]-50;
	printf("%d", result);
} 
