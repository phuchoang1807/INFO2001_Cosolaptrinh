#include <stdio.h>
int main(){
	int i;
	int n;
	int s;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		s+=i*i;
	}
	printf("s= %d",s);
}
