#include <stdio.h>

int main() {
    long long n; 
    int sumEven = 0;  
    int sumOdd = 0;  

    printf("nhap gia tri cua  (0 <= n <= 10^18): ");
    scanf("%lld", &n);  

    while (n > 0) {  //vong lap while de xu li tung chu so cua n
        int digit = n % 10;  // lay chu so cuoi cung bang cach chia du cho 10
        if (digit % 2 == 0) {  // kiem tra chu so ben tren sau khi chia du kia co chan khong
            sumEven += digit;  // cong chu so 4 do vao tong chu so chan 0+=0+4=4
        } else {  // neu chu so duoc chia du kia la le
            sumOdd += digit;  // cong chu so le do vao tong chu so le 0+=0+3
        }
        n /= 10;  // lay chu so ban dau n=1234 chia cho 10 de lay phan nguyen
    }

    printf("tong cac chu so chan: %d\n", sumEven);  
    printf("tong cac chu so le : %d\n", sumOdd); 

    return 0;
}
