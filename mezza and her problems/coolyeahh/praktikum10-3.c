#include <stdio.h>

int main() {
    char string1[50], string2[50];

    printf("string pertama\t: "); gets(string1);
    printf("string kedua\t: "); gets(string2);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf("keduanya sama\n");
    } else {
        printf("Keduanya berbeda\n");
    }
    return 0;
}
