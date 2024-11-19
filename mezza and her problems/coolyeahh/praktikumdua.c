#include <stdio.h>

nomor1 () 
{
    int data;
    data = 10;
    printf("No : %d\n", data);
    char nama[10] = "Ali";
    printf("Nama : %s\n" ,nama);
    float nilai;
    nilai = 80.5;
    printf("Nilai : %f\n", nilai);
    char huruf = 'A';
    printf("Huruf : %c\n", huruf);
}

nomor2 ()
{
    char kopi[10] = "Kopi";
    printf("Membuat Secangkir %s manis dengan krim\n", kopi);
    float gula ;
    gula = 2.5;
    printf("ambil %f sendok gula\n", gula);
    int sendok;
    sendok = 1;
    printf("Tambahkan dengan %d sendok kopi\n", sendok);
    char krim[20] = "krim";
    printf("Lengkapi dengan %s\n", krim);
}

nomor3 ()
{
    char a = 'A';
    float b ;
    b = 8.6;
    char c[20] = "IoT";
    int d;
    d = 2020;
    int e;
    e = 5;
    char f = 'G';
    int g;
    g = 675;
    int h;
    h = 2025;
    printf("Asia pasifik %c%c%c diperkirakan akan memiliki %f\n",'(', a, ')', b);
    printf("miliar perangkat Internet of Thing %c%s%c pada\n", '(', c, ')' );
    printf("tahun %d, dan menjadi wiayah %d%c terbesar\n", d, e, f);
    printf("didunia dengan perkiraan %d juta koneksi\n", g);
    printf("%d%c pada tahun %d\n", e, f, h);
}