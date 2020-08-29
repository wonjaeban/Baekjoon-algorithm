#include<iostream>
#include<algorithm>
#define MAX 9

using namespace std; 

int a[MAX];
int b[MAX];

int main (void){
	for(int i=0; i<MAX; i++){
	scanf("%d", &a[i]);
	b[i]=a[i];		
	}
	sort(a, a+MAX);
	printf("%d\n", a[MAX-1]);
	for(int i=0; i<MAX; i++){
		if(a[MAX-1]==b[i]){
			printf("%d", i+1);
		}
	}
	

}
