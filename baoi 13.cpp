#include <stdio.h> 
int main() {
	int a;
	int b ;
	int c;
	printf("nhap 2 so nguyen duong a (1<=b<=a<=10^8)");
	scanf("%d %d", &a, &b) ;
	c = int((a/b))*b ;
	printf("c = %d",c) ;
}
