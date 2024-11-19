#include <stdio.h>
int main() {
    char kalimat[50];
    printf("input sebuah kalimat: "); gets(kalimat);
    
    for (int i = 0; i < strlen(kalimat); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'A') { 
            kalimat[i] = 'i';
        }
    }
    printf("sesudah penggantian: %s\n", kalimat);

    return 0;
}
