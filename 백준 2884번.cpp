#include<stdio.h>

int main(void){
	int h, m, fixedh, fixedm;
	scanf("%d %d", &h, &m);
	if(m>=45){
		fixedh = h;
		fixedm= m-45;
	}
	else if(h>0 && m<45){
		fixedh = h-1;
		fixedm = 60-(45-m);
	}
	else if(h==0 && m<45){
		fixedh= 23;
		fixedm= 60-(45-m);
	}
	printf("%d %d", fixedh, fixedm);
} 
