#include<stdio.h>

int main(void){
	int score[5]={0};
	int result=0;
	int sum=0;
	for(int i=0; i<5; i++){
		scanf("%d", &score[i]);
	}
	for(int i=0; i<5; i++){
		if(score[i]<40) {
		    score[i]=40;
		}
		sum+=score[i];
	}
	result= sum/5;
	printf("%d", result);
} 
