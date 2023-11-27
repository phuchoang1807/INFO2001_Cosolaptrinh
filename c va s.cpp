#include <stdio.h>
int main() {
	int r;
	float c;
	float s;
	printf("nhap ban kinh r hình tron (1<=r<=106)");
	scanf("%d", &r);
	c =  r*2*3,14;
	s = 3,14*r*r;
	printf("s= %.2f, c= %.2f", s,c);
	return 0;
	/*
	dinh dang %lf duoc su dung de doc va ghi gia tri kieu double,
	trong khi dinh dang %f duoc su dung cho kieu float.
	*/
	 
}
