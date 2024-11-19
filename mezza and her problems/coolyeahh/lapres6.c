#include <stdio.h>

prima(int nmr) {
    if (nmr <= 1) return 0; 
    for (int i = 2; i * i <= nmr; i++) {
        if (nmr % i == 0) return 0;
    }
    return 1; 
}

main() {
    int n, hitung = 0, nmr = 2, total = 0;
    printf("Masukkan nilai n: "); scanf("%d", &n);

    while (hitung < n) {
        if (prima(nmr)) {
            hitung++;
            total += nmr;
            printf("\nbilangan prima yang ke %d\t : %d", hitung, nmr);
        }
        nmr++;
    }
    printf("\nTotal %d bilangan prima\t : %d", n, total);
}
