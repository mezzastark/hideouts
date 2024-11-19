#include <stdio.h>
int main() {
    int jumlah;
    printf("Masukkan jumlah nama: "); scanf("%d", &jumlah);
    getchar(); 

    char nama[jumlah][50];
    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama ke-%d: ", i + 1); scanf("%s", nama[i]);
        nama[i][strcspn(nama[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = i + 1; j < jumlah; j++) {
            if (strcmp(nama[i], nama[j]) > 0) {
                char temp[50];
                strcpy(temp, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], temp);
            }
        }
    }
    printf("\nsesudah diurutkan:\n");
    for (int i = 0; i < jumlah; i++) {
        printf("nama ke-%d: %s\n", i + 1, nama[i]);
    }
    return 0;
}
