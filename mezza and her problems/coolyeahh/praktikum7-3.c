#include <stdio.h>
float main() {
    float angka1, angka2;

    printf("Masukkan dua bilangan\n");
    printf("Bilangan pertama\t: "); scanf("%f", &angka1);
    printf("Bilangan kedua\t: "); scanf("%f", &angka2);

    tukar(&angka1, &angka2);

    printf("\nSetelah ditukar\n");
    printf("Bilangan pertama\t: %f\n", angka1);
    printf("Bilangan kedua\t: %f\n", angka2);

}

void tukar(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
