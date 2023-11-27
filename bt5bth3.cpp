#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Nhap so nguyen to N: ");
    scanf("%d", &N);

    int isPrime = 1;

    if (N <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d là so nguyen to \n", N);
    } else {
        printf("%d không là so nguyen to \n", N);
    }

    return 0;
}
