#include <stdio.h> 
int main() {
	int n;
	printf("nhap so nguyen n(-10^18<=n<=18^18) :") ;
	scanf("%d", &n);
	if(n%3==0 && n%5==0){
		printf("1");
		 
	} 
	else{
		printf("0") ;
	} 
	return 0;
	 
}
