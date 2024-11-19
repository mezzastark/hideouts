#include <stdio.h>
int f_to_i(int kaki) {
    return kaki * 12;
}
float i_to_cm(int inchi) {
    return inchi * 2.54;
}
float c_to_m(float cm) {
    return cm / 100;
}

int main() {
    int kaki, inchi;
    float cm, meter;

    printf("Masukkan ukuran dalam kaki: "); scanf("%d", &kaki);

    inchi = f_to_i(kaki);
    cm = i_to_cm(inchi);
    meter = c_to_m(cm);

    printf("%d kaki sama dengan %.2f meter.\n", kaki, meter);

    return 0;
}