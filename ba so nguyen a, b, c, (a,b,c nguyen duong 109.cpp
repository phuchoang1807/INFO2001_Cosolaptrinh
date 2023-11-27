#include <stdio.h>;
int main() {
	int a, b, c;
	int s; 
	printf("ba so nguyen a, b, c, (a,b,c nguyen duong <109)");
	scanf("%d %d %d", &a, &b, &c);
	s = a*(b+c) + b*(a+c);
	printf("S= %d",s );
	return 0; 
		 
}
