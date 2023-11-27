#include <stdio.h>
int main() {
	long long  n;
	printf("nhap so nguyen n: ") ;
	scanf("%lld",&n);
	int sum=0;
	while(n!=0) {
		int le=n%10; 
		if(le!=0){
			if(le%2!=0){
					sum+=le;
			} 
	}
	n/=10; 
	}
	printf("tong cac chu so le cua n :%d", sum);
	 
	return 0;
	 
}
