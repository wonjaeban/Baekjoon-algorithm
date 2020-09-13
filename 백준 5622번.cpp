#include<stdio.h>
#include<string.h>

char a[16];

int Result(char a[]){
	int count[26]={0};
	int result=2;
	int sum=0;
	char b[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=0; i<18; i++){
		if(i%3==0){
		count[i]++;
		}
	}
	count[0]=1;
	count[19]=1;
	count[22]=1;
	for(int i=0; i<strlen(a); i++){
		for(int j=0; j<26; j++){
		if(a[i]==b[j]){
			for(int k=0; k<=j; k++){
				if(count[k]==1){
					result++;
				}
			}
			sum+=result;
			result=2;
		}
		}
	}
	return sum;
}

int main(void){
	scanf("%s", a);
	int len=strlen(a);
	printf("%d", Result(a));
} 
