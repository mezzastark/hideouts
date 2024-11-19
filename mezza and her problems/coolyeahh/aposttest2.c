#include <stdio.h>
int main () {
    int i, jumlahderet, a = 3, b = 5, hasil = 0, jumlah ;
    do{
    printf("masukkan jumlah bilangan deret\t:"); scanf("%d", &jumlahderet);
        if(jumlahderet <= 0){
        printf("nilai yang dimasukkan negatif ulang!\n");
        }
     } while (jumlahderet <= 0);
    
     printf("deret:\n");
     for (int i = 1; i <= jumlahderet; i++){
        jumlah = a + (i - 1)*b;
        printf("%d, ", jumlah);
        hasil += jumlah;
     }
     
     printf("\nhasil penjumlahan deret\t: %d\n", hasil);

     return 0;
}