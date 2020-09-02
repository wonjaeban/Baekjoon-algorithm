#include<stdio.h>
#include<string.h>
#include<algorithm>


char a[101];
int b[101];
int count[26];

int main(void){
	for(int i=0; i<26; i++){
			count[i]=-1;
	}
	scanf("%s", a);
	for(int i=0; i<strlen(a); i++){
		b[i]=a[i]-'a';
	}
	for(int i=0; i<strlen(a); i++){
		if(count[b[i]]==-1){
			count[b[i]]=i;
		}
	}
	
	for(int i=0; i<26; i++){
		printf("%d ", count[i]);
	}
}
