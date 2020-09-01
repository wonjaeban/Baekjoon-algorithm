#include<stdio.h>

int n;

long long Hansu(int n){
	int q, w, e;
	int result; 
	int count=0;
	if(n<100){
		result=n;
}
     else{
     	int k=100;
     	while(k<=n){
		 q=k/100;
		 w=(k%100)/10;
		 e=((k%100)%10);
		 if((w-q)== (e-w)){
		 	count++;
		 }
		 k++;
	 }
        result= count+99;
}
return result;
}

int main(void){
	scanf("%d", &n);
	printf("%d", Hansu(n));
}
