#include <stdio.h>
int palindrome(char str[]) {
    int kiri = 0;
    int kanan = strlen(str) - 1;

    while (kiri < kanan) {
        while (kiri < kanan && !isalpha(str[kiri])) kiri++;
        while (kiri < kanan && !isalpha(str[kanan])) kanan--;

        if (tolower(str[kiri]) != tolower(str[kanan])) {
            return 0;
        }
        kiri++;
        kanan--;
    }
    return 1;
}
int main() {
    char kalimat[50];
    printf("Masukkan sebuah kalimat: "); gets(kalimat);

    kalimat[strcspn(kalimat, "\n")] = '\0';

    if (palindrome(kalimat)) {
        printf("termasuk palindrom\n");
    } else {
        printf("bukan palindrom\n");
    }
    return 0;
}
