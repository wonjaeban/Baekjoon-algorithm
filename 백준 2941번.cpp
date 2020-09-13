#include<stdio.h>
#include<string.h>
#define MAX 101

char a[MAX];
int count;

int counting(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(a[i]=='c' && a[i+1]=='='){
			count++;
			i++;
		}
		else if(a[i]=='c' && a[i+1]=='-'){
			count++;
			i++;
		}
		else if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='='){
			count++;
			i+=2;
		}
		else if(a[i]=='d' && a[i+1]=='-'){
			count++;
			i++;
		}
		else if(a[i]=='l' && a[i+1]=='j'){
			count++;
			i++;
		}
		else if(a[i]=='n' && a[i+1]=='j'){
			count++;
			i++;
		}
		else if(a[i]=='s' && a[i+1]=='='){
			count++;
			i++;
		}
		else if(a[i]=='z' && a[i+1]=='='){
			count++;
			i++;
		}
		else{
			count++;
		}
	}
	return count;
}

int main(void){

	scanf("%s", a);
	printf("%d", counting(a));
}
