#include <stdio.h>
nomor1 () {
    float suhu;
    int b;
    printf("Masukkan suhu: ");
    scanf("%f", &suhu);

    if (suhu > 30) {
        b = 1;  
    } else if (suhu < 0) {
        b = 2;   
    }

    switch (b) {
        case 1:
            printf("suhu sangat panas\n");
            break;
        case 2:
            printf("suhu sangat dingin\n");
            break;
        default:
            printf("suhu udara sejuk\n");
            break;
    }
}

main ()
{
    char a;
    printf("masukkan huruf : "); scanf("%c", &a);

    if (a == 'A' || a =='a'){
        printf("4\n");
    }
    else if (a == 'B' || a =='b'){
        printf("3\n");
    }
    else if (a == 'C' || a =='c'){
        printf("2\n");
    }
    else if (a == 'D' || a =='d'){
        printf("1\n");
    }
    else if (a == 'E' || a == 'e'){
        printf("0\n");
    }
    else {
        printf("huruf tidak valid.\n");
    }
}
