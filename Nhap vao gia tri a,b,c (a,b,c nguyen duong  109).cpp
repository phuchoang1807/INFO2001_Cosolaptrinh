#include <stdio.h>> 

 int main(){
//Your code here
//B1. Input
 int a,b, c;
 int S;
printf("Nhap vao gia tri a,b,c (a,b,c nguyen duong < 109): ");
scanf("%d %d %d", &a, &b, &c);
// Process (Chua not toi If…else)
S = a* (b+c) +b* (a+c);
//B3. Output
printf ("Tong S la: %d");
return 0;
}
