#include <stdio.h> 
	int main(){
	long long n;
	long long  tongs
//	1^2 + 2^2 + 3^2 + ... + n^2= n*(n+1)(2n+1)/6 
	 
	printf("nhap so nguyen n khong am (0<=n<=10^5)");
	scanf("%lld", &n);
	tongs = n*(n+1)*(2*n+1)/6;
	printf("tongs : %lld", tongs) ;
	return 0;
}
