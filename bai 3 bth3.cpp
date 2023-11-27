#include <stdio.h> 
int main() {
	int n;
	int i =1;
	int m ;
	 
	printf("nhap bang cuu chuong muon tinh: ");
	scanf("%d", &n) ;
	if(2<=n && n<=9){
	for(i;i<=9;i++){
	
		m=n*i;
		printf("%d=%dx%d \n", m,n,i) ;
	    }
    } 
	else{
		printf("INVALID\n");
	}
		
	
	
  return 0;	
}

