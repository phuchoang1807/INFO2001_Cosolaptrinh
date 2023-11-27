#include <stdio.h> 
#include <math.h>
int main() {
	/*
	De tinh khoang cach Euclid giua hai diem trong he toa do Oxy, hay lam theo cac buoc sau:

Xac dinh toa do cua hai diem. Gia su diem thu nhat co toa do la A(x?, y?) va diem thu hai co toa do la B(x?, y?).

Tinh hieu giua toa do x cua hai diem: Delta x = x2 - x1.

Tinh hieu giua toa do y cua hai diem: Delta y = y2 - y1.

Tinh binh phuong cua Delta x: (Delta x)².

Tinh binh phuong cua Delta y: (Delta y)².

Tinh tong cua (Delta x)² va (Delta y)²: (Delta x)² + (Delta y)².

Tinh can bac hai cua tong o buoc truoc: d = ?[(Delta x)² + (Delta y)²]."
	*/
	int x1;
	int x2;
	int y1;
	int y2;
	float khoangcachgiuahaidiem ;
	printf(" nhap toa do 2 diem (x1,y1) va (x2,y2) la cac so nguyen (-106<=xi,yi<=106):\n") ;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	khoangcachgiuahaidiem = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	printf(" khoangcachgiuahaidiem = %.2f\n",khoangcachgiuahaidiem) ;
	/*
	"Tren thuc te, neu ban chi muon in ket qua va ket thuc chuong trinh ma khong can them cac cau lenh khac sau do, 
	ban co the viet ngan gon hon bang cach loai bo cau lenh return 0."
	*/
	
	

	 
	 
	
	 
}
