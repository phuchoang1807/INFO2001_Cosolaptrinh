#include <stdio.h>

int main() {
    int doC;
    float doF;

    printf("Nh?p nhi?t �? �o theo �? C: ");
    scanf("%d", &doC);

    doF = (doC * 9 / 5.0) + 32;

    printf("Nhi?t �? theo �? F: %.2f\n", doF);

    return 0;
}
