#include <stdio.h>

int main() {
    long long n;
    int cnt = 0;
    printf("Nhap so n: ");
    scanf("%lld", &n);
    
    for (; n != 0; n /= 10) {
        cnt++;
    }
    
    printf("So chu so cua n: %d\n", cnt);
    return 0;
}
