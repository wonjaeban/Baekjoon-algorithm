#include<stdio.h>
#include<string.h>
#define MAX 1000001


char a[MAX];


int main(void){
	int count=0;
	scanf("%[^\n]s", a);
	int len= strlen(a);
	if(a[0]!=' '){
			count++;
		}
	for(int i=0; i<len-1; i++){
		if(a[i]==' ' && a[i+1] != ' '){
			count++;
		}
	}

	printf("%d", count);
}
