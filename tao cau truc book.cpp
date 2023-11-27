#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    int n;
    printf("Nhap so luong sach (n): ");
    scanf("%d", &n);

    // Cap phat bo nho dong cho mang co kich thuoc dong
    struct Book* books = (struct Book*)malloc(n * sizeof(struct Book));

    // Nhap thong tin cho tung quyen sach
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho quyen sach thu %d:\n", i + 1);
        printf("Ten sach: ");
        scanf("%s", books[i].title);
        printf("Tac gia: ");
        scanf("%s", books[i].author);
        printf("Nam xuat ban: ");
        scanf("%d", &books[i].year);
    }

    // In thong tin cua tung quyen sach
    for (int i = 0; i < n; i++) {
        printf("Thong tin quyen sach thu %d:\n", i + 1);
        printf("Ten sach: %s\n", books[i].title);
        printf("Tac gia: %s\n", books[i].author);
        printf("Nam xuat ban: %d\n", books[i].year);
    }

    // Giai phong bo nho da cap phat
    free(books);
    return 0;
}
