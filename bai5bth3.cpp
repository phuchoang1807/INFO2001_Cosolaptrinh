#include <stdio.h>

int main() {
    int n;
    long tongdayso = 0;

    printf("nhap gia tri n nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("INVALID");
        return 0;
    } 

    for (int i = 1; i <= n; i++) {
        tongdayso += i * i;
    }

    printf("Tong day so = %ld", tongdayso);

    return 0;
}
