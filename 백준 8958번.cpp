#include<stdio.h>
#include<string.h>

using namespace std;

char a[81];

int main(void){
	int n;
	int count=0;
	int result=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", a);
	    for(int j=0; j<strlen(a); j++){
	    	if(a[j]=='O'){
	    	count++;
			result+=count;	
			}
			else{
				count=0;
			}
		}
		printf("%d\n", result);
		result=0;
		count=0;
		char a[81]="\0";
	}	
}
