#include <stdio.h>
int main() {
	int i =0;
	while(i<5) {
		printf("%d \n",i);
		i++;
	}
	printf(" gia tri ket thuc cua vong lap while la : %d", i);
	/*
	neu ta viet printf("i \n") thi no se ko hien
	 1 2 3 4 vi thag printf la de xuat ra chuong trinh 
	 khi dk co dung di chang nx thi no van xuat ra gt 
	 i i i i nen ta ko the lam vay h ta se dinh dang
	 cho thang printf(" dau tien la dinh dang gt xuat ra bang %d
	 thu 2 \n xuong dong thu 3 la xac dinh lai 
}

