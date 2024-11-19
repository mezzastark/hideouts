#include <stdio.h>

int main1() {
    char kata[] = "POLITEKNIK";
    int panjang = strlen(kata);

    for (int i = panjang; i > 0; i--) {
        printf("%.*s\n", i, kata);
    }

    return 0;
}

int main2() {
    char kata[] = "POLITEKNIK";
    int panjang = strlen(kata);

    for (int i = 1; i <= panjang; i++) {
        printf("%.*s\n", i, kata);
    }

    return 0;
}

