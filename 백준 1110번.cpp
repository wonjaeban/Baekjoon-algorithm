#include<stdio.h>

int main(void){
	int cycle, n, firstN;
	scanf("%d", &n);
	firstN=n;
	while(n!=firstN || cycle==0){
	if((n/10+n%10) >=10){
		n = (n%10)*10 + ((n/10+n%10)-10);
	
}
	else{
		n = (n%10)*10 + (n/10+n%10);
		
	}
	cycle++;
}
printf("%d", cycle);
}
