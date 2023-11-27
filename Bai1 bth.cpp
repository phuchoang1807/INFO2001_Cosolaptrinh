#include <stdio.h>
#include <time.h>

void sapXep(int mang[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                int temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }
}

void sapXepChon(int mang[], int n) {
    int i, j, viTriNhoNhat;
    for (i = 0; i < n - 1; i++) {
        viTriNhoNhat = i;
        for (j = i + 1; j < n; j++) {
            if (mang[j] < mang[viTriNhoNhat]) {
                viTriNhoNhat = j;
            }
        }
        int temp = mang[i];
        mang[i] = mang[viTriNhoNhat];
        mang[viTriNhoNhat] = temp;
    }
}

int main() {
    int mang[] = {5, 2, 8, 12, 1};
    int n = sizeof(mang) / sizeof(mang[0]);

 
    clock_t thoiGianBatDau = clock();
    sapXep(mang, n);
    clock_t thoiGianKetThuc = clock();
    double thoiGianThucThi = (double)(thoiGianKetThuc - thoiGianBatDau) / CLOCKS_PER_SEC * 1000;
    printf("Sap xep: %.2f milliseconds\n", thoiGianThucThi);

    
    clock_t thoiGianBatDauChon = clock();
    sapXepChon(mang, n);
    clock_t thoiGianKetThucChon = clock();
    double thoiGianThucThiChon = (double)(thoiGianKetThucChon - thoiGianBatDauChon) / CLOCKS_PER_SEC * 1000;
    printf("Sap xep chon: %.2f milliseconds\n", thoiGianThucThiChon);

    return 0;
}

