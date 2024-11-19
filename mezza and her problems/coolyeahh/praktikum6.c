#include <stdio.h>

nomor1pen() {
    int baris, kolom;
    printf("Masukkan Jumlah baris: "); scanf("%d", &baris);
    printf("Masukkan jumlah kolom: "); scanf("%d", &kolom);

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("A ");
        }
        printf("\n");
    }
}

nomor2pen() {
    int baris = 3, kolom = 5;
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

nomor1() {
    int n, i, j;
    printf("Masukkan nilai: "); scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    

    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

nomor2() {
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 5; j++) {
      printf("%d ", i * j);
    }
    printf("\n");
  }
} 

nomor3 ()
{
    int students, currentlnt, index = 0;
    double sum,avg;
    printf("masukkan jumlah mahasiswa\t: "); scanf("%d", &students);

    while (index < students){
        printf("masukkan nilai ke %d\t:", index + 1); scanf("%d", &currentlnt);

            if(currentlnt < 0){
                continue;
            } else {
                sum += currentlnt;
                index++;
            }
    }

    avg = sum / students;
    printf("\n\n\n");
    printf("banyak mahasiswa\t: %.1d \n", students);
    printf("total nilai mahasiswa\t: %.1f\n", sum);
    printf("rata rata nilai mahasiswa\t: %.1f \n", avg);
}

main(){
    int B;
    printf("masukkan nilai B\t:"); scanf("%d", &B);

    if (B==0){
        goto tak_berhingga;
    }

    printf("nilai B bukan nol: %d\n", B);
    return 0;

    tak_berhingga:
        printf("nilai B adalah nol, program masuk ke label tak_berhingga\n");
}
