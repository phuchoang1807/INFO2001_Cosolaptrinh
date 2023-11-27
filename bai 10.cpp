#include <stdio.h>
int main() {
	long long n;
	double tongs;
	printf("nhap so nguyen duong n (1<=n<=10^9)");
	scanf("%lld", &n);
	tongs = 1-(1.0/(n+1));
	printf("tongs = %.2lf", tongs) ;
	return 0;
	 
}
