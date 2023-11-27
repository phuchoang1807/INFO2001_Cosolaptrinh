#include <stdio.h> 

int main() {
	long n;
	printf("Nhap nam la mot so nguyen (-10^6 <= n <= 10^6): ");
	scanf("%ld", &n);

	if (n <= 0) {
		printf("INVALID\n");
	} 
	else if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
		printf("YES\n");
	} 
	else {
		printf("NO\n");
	} 
	
	return 0;
}
