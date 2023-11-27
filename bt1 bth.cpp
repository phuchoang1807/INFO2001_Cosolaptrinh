#include <stdio.h>

void sap_xep(int mang[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (mang[j] > mang[j+1]) {
                int temp = mang[j];
                mang[j] = mang[j+1];
                mang[j+1] = temp;
            }
        }
    }
}

int main() {
    int mang[] = {20, 18, 7, 21, 9, 4, 23};
    int n = sizeof(mang)/sizeof(mang[0]);
    sap_xep(mang, n);
    printf("mang Bubble Sort: \n");    
    for (int i=0; i < n; i++)
        printf("%d ", mang[i]);
    return 0;
}

