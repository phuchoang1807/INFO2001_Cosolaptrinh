#include <stdio.h>
int main() {
	long n;
	printf(" nhap nam la mot so nguyen (-10^6<=n<=10^6)") ;
	scanf("%ld", &n);
	if(n%400==0){
		printf("yes") ;
	} 
	else if(n%400!=0 ){
		printf("no"); 
	} 
	else{
		printf("invalid");
		
	} 
	
	return 0;
	 
}
