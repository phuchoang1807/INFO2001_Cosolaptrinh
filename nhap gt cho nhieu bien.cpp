#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap gia tri a: ");
    // printf de xuat ra man hinh dong chu nay
	 scanf("%d", &a);
	 // scanf ("nhap du lieu", gan vao gt bien vi cuoi cung xuat ra la hai bien a+b cho nên scan nay la nhap va nhap vao cai j) 
    printf("Nhap gia tri b: ");
    scanf("%d", &b);
    printf("a + b = %d\n", (a + b));


    return 0;
}
