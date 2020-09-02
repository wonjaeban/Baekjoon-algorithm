#include<stdio.h>
#include<string.h>

int t;

int main(void){
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		int r=0;
		char s[20]={0};
		scanf("%d", &r);
		scanf("%s", s);
			for(int k=0; k<strlen(s); k++){
			for(int j=0; j<r; j++){
				printf("%c", s[k]);
			}
			
		}
		printf("\n"); 
		
	}
}
