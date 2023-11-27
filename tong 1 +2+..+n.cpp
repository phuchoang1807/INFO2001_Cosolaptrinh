#include <stdio.h> 
int main() {
	int i;
	int n;
	int s = 0;
	// bat buoc phai khai bao s moi co bieu thuc ben duoi 
	scanf("%d", &n);
	
	 
	for(i=1; i <= n ; i++){
		s += i; 
	} 
	printf("s = %d", s) ;
}
