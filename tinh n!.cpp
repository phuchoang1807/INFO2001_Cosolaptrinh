#include <stdio.h>

int main() {
    int n;
    int giaiThua = 1;
    
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    
    printf("%d! = %d\n", n, giaiThua);
    
    return 0;
}
