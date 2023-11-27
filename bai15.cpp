#include <stdio.h> 
int main() {
	long long  n;
	printf("nhap so n (-10^8<=n<=10^18)");
	scanf("%lld", &n);
	if(n%3 == 0 && n%5 == 0){
		printf("1");
	}
	else{
		printf("0");
	}
return 0;
}


