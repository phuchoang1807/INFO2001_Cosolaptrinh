#include <stdio.h>

int main() {
    int doC;
    float doF;

    printf("Nh?p nhi?t ð? ðo theo ð? C: ");
    scanf("%d", &doC);

    doF = (doC * 9 / 5.0) + 32;

    printf("Nhi?t ð? theo ð? F: %.2f\n", doF);

    return 0;
}
