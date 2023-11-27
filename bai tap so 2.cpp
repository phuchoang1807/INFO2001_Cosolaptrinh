 #include <stdio.h>
 int main() {
 	int x;
 	int A; 
	printf("nhap gia tri x (x nguyen duong <105):");
	scanf("%d", &x);
	// b2 process
	A = x*x*x + 3*x*x + x + 1; 
	// b3 output
	/*
	"Trong ngon ngu lap trinh C, ban khong the khai bao bien theo cu phap int A(x);
	 nhu ban da thu lam. Dieu nay la vi trong C, cu phap khai bao bien khong chap nhan tham so truyen vao."
	 int x;
 	 int A(x); 
	*/
	printf("A = %d ",A);
	/*
	 Trong lenh printf cuoi cung, ban chi in ra thong diep "A: %d",
	 nhung khong co gia tri nao duoc chen vao cho %d. Ban can chen gia tri cua A vao do bang cach su dung bien hoac gia tri truc tiep."printf("A: %d\n", A);
	 printf("A : %d ");
	*/
	return 0;
	 
 }
