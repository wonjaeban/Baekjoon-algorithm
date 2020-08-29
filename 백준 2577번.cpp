#include<stdio.h>


int d[10];

int main(void){
	int a, b, c;
	int multiple=0;
	scanf("%d %d %d", &a, &b, &c);
	multiple=a*b*c;
	while(multiple!=0){
	for(int i=0; i<10; i++){
	if(multiple%10==i){
		d[i]++;
		multiple = multiple/10;
	}	
   }
 }
    for(int i=0; i<10; i++){
    	printf("%d\n", d[i]);
	} 
}
