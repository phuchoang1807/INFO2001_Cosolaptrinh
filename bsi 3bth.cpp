#include <stdio.h>

int main() {
    int n;
    float diem[100], tb = 0.0;

    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap diem cua sinh vien thu %d: ", i+1);
        scanf("%f", &diem[i]);
        tb += diem[i];
    }

    tb /= n;
    printf("Diem trung binh cua lop la: %.2f", tb);

    return 0;
}

