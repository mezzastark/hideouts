#include <stdio.h>
int main() {
    int angka1, angka2, angka3;
    printf("Masukkan 3 buah bilangan: \n"); scanf("%d %d %d", &angka1, &angka2, &angka3);

    int max = maximal(angka1, angka2, angka3);
    printf("Nilai terbesar adalah %d\n", max);

    return 0;
}

int maximal(int a, int b, int c) {
    int max = a; 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
