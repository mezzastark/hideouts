#include <stdio.h>

nomor1pen () {
    int a;
    printf("Masukkan nilai ujian: "); scanf("%d", &a);

    if (a >= 70) {
        printf("Anda lulus\n");
    } else {
        printf("Anda tidak lulus\n");
    }
}

nomor2pen () {
    int b;
    printf("masukkan nomor: "); scanf("%d", &b);

    if (b == 1) {
        printf("hari: minggu\n");
            } else if (b == 2) {
        printf("hari: senin\n");
            } else if (b == 3) {
        printf("hari: selasa\n");
            } else if (b == 4) {
        printf("hari: rabu\n");
            } else if (b == 5) {
        printf("hari: kamis\n");
            } else if (b == 6) {
        printf("hari: jumat\n");
            } else if (b == 7) {
        printf("hari: sabtu\n");
            } 
}

nomor1 ()
{
    int c;
    printf("masukkan suhu:"); scanf("%d", &c);

    if (c > 30) {
        printf("suhu udara sangat panas\n");
    }
    else if (c < 0){
        printf("suhu udara sangat dingin\n");
    } else {
        printf("suhu udara sejuk\n");
    }
}

nomor2 () 
{
  char a;
  int b;

  printf("Masukkan huruf: ");
  scanf("%c", &a);

  switch (a) {
    case 'A':
      b = 4;
      break;
    case 'B':
      b = 3;
      break;
    case 'C':
      b = 2;
      break;
    case 'D':
      b = 1;
      break;
    case 'E':
      b = 0;
      break;
    default:
      printf("Huruf tidak valid.\n");
      }
}

nomor3 ()
{
    int a, b, c, result;
    printf("masukkan 3 angka: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
    if (a < c) {result = a;} else {result = c;}} 
            else if (b < c) {result = b;}
            else {result = c;}

    printf("angka paling kecil adalah :  %d\n", result);
}

nomor4 ()
{
    int pemakaian;
    int biaya;
    printf("masukkan total pemakaian listrik (Kwh): ");
    scanf("%d", &pemakaian);

    if (pemakaian <= 100) 
        {biaya = 100000;} 
    else if (pemakaian <= 500) 
        {biaya = 100000 + (pemakaian - 100) * 1500;} 
    else 
        {biaya = 700000 + (pemakaian - 500) * 2000;}
    
    printf("Biaya rekening listrik: %d\n", biaya);
}