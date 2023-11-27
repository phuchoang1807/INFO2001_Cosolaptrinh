#include <stdio.h>
int main() {
	int n;
	printf("nhap so diem cua hoc sinh 0<=diem<=10 :");
	scanf("%d", &n);
	if(n < 5){
		printf("yeu");
		
	}
	else if(n < 6.5){
		printf("Trung binh");
	}
	else if(n < 8){
		printf("kha");
		
	}
	else if(n < 9){
		printf("gioi");
	}
	else if(n<=10){
		printf("xuat xac");
	}
	else {
		printf("INVALID");
	}
	
	
	return 0;
	
	
}
