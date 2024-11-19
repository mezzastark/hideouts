#include <stdio.h>

int main() {
    int jumlah_mahasiswa = 2 ;
    int jumlah_nilai = 2;
    int nilai[10];
    float rata_rata[10];
    int total_nilai[3] = {0};
    char nama[10];

    printf("jumlah mahasiswa : "); scanf("%d", &jumlah_mahasiswa);

    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        printf("nama Mahasiswa-%d : ", i); scanf("%s", nama);

        printf("jumlah nilai : "); scanf("%d", &jumlah_nilai);

        for (int j = 1; j <= jumlah_nilai; j++) {
            printf("nilai-%d : ", j); scanf("%d", &nilai[j]);
            total_nilai [j] += nilai [j];
        }

        rata_rata[i] = (float)total_nilai[i] / jumlah_nilai;
        printf("nilai rata-rata %s adalah %.2f\n", nama, rata_rata[i]);
    }

    return 0;
}