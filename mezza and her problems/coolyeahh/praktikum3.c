#include <stdio.h>

nomor1 ()
{
    int g,h;
    char e[20];
    printf("Masukkan data diri anda\n");
    printf("Nama: ");scanf("%s", e);
    printf("Umur: ");scanf("%d", &g);
    printf("No telpon: ");scanf("%d", &h);
    printf("Hello %s, umur %d, no telp %d\n", e, g, h);
    printf("Bagaimana kabar anda hari ini?\n");
}

nomor2 () 
{
    int m,a,l;
    printf("Masukkan kecepatan dan waktu mobil anda\n");
    printf("Kecepatan(m/detik):");scanf("%d" ,&m);
    printf("Waktu(detik):");scanf("%d", &a);
    l = m * a;
    printf("\n");
    printf("Jadi jarak tempuh (m) anda adalah %d meter.", l);
}

nomor3 ()
{
    int a,b,c;
    printf("a: ");scanf("%d", &a);
    printf("b: ");scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Nilai a: %d\n", a);
    printf("Nilai b: %d\n", b);
}

nomor4 ()
{
    int a,b,c,d;
    printf("masukkan panjang, lebar dan tinggi\n");
    printf("panjang (cm) : ");scanf("%d" ,&a);
    printf("lebar (cm) : ");scanf("%d", &b);
    printf("tinggi (cm) : ");scanf("%d", &c);
    d = a * b * c;
    printf("\n");
    printf("jadi volumenya adalah %d cm kubik \n", d);
}

nomor5 ()
{
    float sisia,sisib,sisic,alas,tinggi,keliling,luas;
    printf("masukkan alas dan tinggi segitiga\n");
    printf("alas (cm) : "); scanf("%f", &alas);
    printf("tinggi (cm) : "); scanf("%f", &tinggi);
    luas = alas * tinggi / 2;
    printf("jadi luas segitiga adalah : %f\n", luas);
    printf("masukkan panjang ketiga sisi untuk medapatkan keliling\n"); 
    printf("sisi a, sisi b, sisi c (cm) : "); scanf("%f %f %f", &sisia, &sisib, &sisic);
    keliling = sisia + sisib + sisic;
    printf("jadi keliling segitiga adalah : %f\n", keliling);
}