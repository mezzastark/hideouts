#include <stdio.h>

nomor1() {
    int batas, hasil = 0;
    printf("Masukkan batas angka: "); scanf("%d", &batas);
    for (int i = 1; i <= batas; i++) {
        hasil += i;
    }
    printf("Hasil penjumlahan dari 1 hingga %d adalah: %d\n", batas, hasil);
}

nomor2() {
    int total = 0, angka, counter = 1;
    char pilihan;

    while (1) {
        printf("Masukkan bilangan ke-%d : ", counter);
        scanf("%d", &angka);
        total += angka; 

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &pilihan);  
        if (pilihan == 't' || pilihan == 'T') {
            break; 
        }
        counter++;
    }
    printf("Total bilangan = %d\n", total);
}

nomor3 () {
    int angka_acak, tebakan;
    srand(time(0));
    angka_acak = rand() % 100 + 1;

    do {
        printf("Angka tebakan: ");
        scanf("%d", &tebakan);

        if (tebakan < angka_acak) {
            printf("Tebakan terlalu kecil\n");
        } else if (tebakan > angka_acak) {
            printf("Tebakan terlalu besar\n");
        } else {
            printf("Tebakan benar\n");
        }
    } while (tebakan != angka_acak);  
}

main () {
    char jawaban;
    do {
        printf("Anda sudah sholat?? (s/b): ");
        scanf(" %c", &jawaban);  

        if (jawaban == 's' || jawaban == 'S') {
            printf("Bagus!\n");
        } else if (jawaban == 'b' || jawaban == 'B') {
            printf("Sholat adalah ibadah.\n");
        }
    } while (jawaban != 's' && jawaban != 'b' && jawaban != 'S' && jawaban != 'B');  
}
