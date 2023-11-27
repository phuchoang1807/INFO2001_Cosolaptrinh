#include <stdio.h> 
int main() {
	unsigned int t;
	unsigned int n;
	printf("nhap 2 so nuyen t va n (-10^6<=t,n<=10^6)");
	scanf("%d %ld", &t, &n) ;
	if( (t==1) || (t==3) || (t==5) || (t==7) || (t==8)|| (t==10)|| (t==12) ){
	
	printf("31 ngay");
}
	else if(t==4 || t==6 || t==9 || t==11){
		printf("30 ngay ");
		
	}
	else if( t==2 && n%400==0){
		printf("29 ngay");
		
	}
	else{
		printf("INVALID");
		
	}
	return 0;
	
}
	
