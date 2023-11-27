#include <stdio.h>
int main() {
	int a;
	int b;
	printf("nhap 2 so nguyen a,b []b khac 0(a>= -109, b<= 109)]");
	scanf("%d %d", &a, &b);
	int tong = a + b;
	int tich = a * b;
	int hieu = a - b;
	int thuong = a / b;
	printf("tong= %d, hieu= %d, tich= %d, thuong= %d,",tong, hieu, tich, thuong );
	return 0 ;
	 
	 
}
