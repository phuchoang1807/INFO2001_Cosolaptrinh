#include <stdio.h>;
int main() {
	long long n;
	printf("nhap so n ko am");
	scanf("%lld", &n);
	/*
	-1+2-3+4-5+6-...+9-1)^n.n
	vd n la so chan (-1+2) + (-3+4) + (-5+6) 
	voi n=6 mà tong cac ngoac bang 1 suy ra ct :n/2 
	vd n la so le (-1+2)+(-3+4)+(-5+6)-7 voi n = 7 ct la n-1/2
	ta phai lam 2 th
	*/
	 if(n % 2 ==0){
	 	long long tongs;
	 	tongs= n/2;
		printf("tongs = %lld", tongs) ;
		 
	 }
	 else{
	 	double tongs;
	 	tongs = (n-1)/2.0;
		 printf("tongs = %.2lf", tongs);
		  
	 } 
	 return 0;
	  
}
