#include <stdio.h>

int tim_kiem_nhi_phan(int mang[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (mang[mid] == x)
            return mid;
        if (mang[mid] > x)
            return tim_kiem_nhi_phan(mang, low, mid - 1, x);
        return tim_kiem_nhi_phan(mang, mid + 1, high, x);
    }
    return -1;
}

int main() {
    int mang[] = {11, 22, 25, 34, 64, 90};
    int n = sizeof(mang)/sizeof(mang[0]);
    int x = 34;
    int ket_qua = tim_kiem_nhi_phan(mang, 0, n - 1, x);
    if (ket_qua == -1)
        printf("Khong tim thay gia tri %d trong mang.", x);
    else
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.", x, ket_qua);
    return 0;
}

