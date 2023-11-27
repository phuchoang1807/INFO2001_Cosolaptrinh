#include <stdio.h> 
int main() {
	long long n;
	long long tongs;
//	 1+2+3+4+...+n= n*(n+1) /2 
	 
	printf("nhao so n guyen ko am (0<=n<=10^8)\n");
	scanf("%lld", &n) ;
	tongs = n*(n+1)/2 ;
	printf("tongs : %lld", tongs);
	return 0;
	 
	
}
