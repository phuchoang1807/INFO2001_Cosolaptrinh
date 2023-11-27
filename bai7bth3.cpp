#include <stdio.h>
int main(){
	long n;
	int sochusochan=0;
	int sochusole=0;
	int chan;
	int le;
	
	printf("nhap so n(0<=n<=10^18)");
	scanf("%ld", &n);
	while(n>0){
		chan= n%10;
		if(chan%2==0){
			sochusochan++;
			
		}
		else{
			sochusole++;
		}
		n/=10;
		}
		if(sochusochan==sochusole){
			printf("yse");
		}
		else{
			printf("no");
		}
		
	}
