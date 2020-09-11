#include<stdio.h>
#include<string.h>
#define MAX 1000001

char a[MAX];
int b[MAX];
int c;
int result;
int count[27];
char realResult;

int main(void){
	scanf("%s", a);
	int len=strlen(a);
	for(int i=0; i<len; i++){
		b[i]=a[i];
	if(b[i]>96){
		b[i]=b[i]-32;
	}
	}
	for(int i=0; i<len; i++){
		count[b[i]-65]++;
	}

	for(int i=0; i<26; i++){
		if(count[i]!=0){
			result=count[i];
			c=i;
			realResult=(c+65);
			break;
			}
		}
		
	for(int j=c+1; j<27; j++){		
		
		if(result==count[j] && count[j]!=0){
			result=count[j];
			realResult='?';
		}
		else if(result<count[j] && count[j]!=0){
			result=count[j];
			realResult=(j+65);
		}
	}
		printf("%c", realResult);
	
}

