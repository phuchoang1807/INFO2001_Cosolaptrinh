#include <stdio.h>;
int main(){
	int n;
	int i;
	int s = 0;
	
	scanf("%d", &n);
	for(i=0;i<=n;i+= 3){
		s+=i;
		
	}
	printf("s= %d", s);
	
}
