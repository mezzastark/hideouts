#include <stdio.h>

int main() {
    int angka[10], i, j, temp;
    printf("Masukkan 10 bilangan:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &angka[i]);
    }
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (angka[j] < angka[j+1]) {
                temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = temp;
            }
        }
    }
    printf("Bilangan setelah diurutkan (dari terbesar ke terkecil):\n");
    for (i = 0; i < 10; i++) {
        printf("%d, \n", angka[i]);
    }

    return 0;
}