#include <stdio.h>
#define MAX_BARANG 100
struct Barang {
    int id;
    char nama[50];
    int stok;
};
struct Barang inventaris[MAX_BARANG];
int jumlah_barang = 0;

// Fungsi utama
int main() {
    int pilihan;

    do {
        printf("\t===== Sistem Manajemen Inventaris =====\n");
        printf("\t1. Tambah Barang\n");
        printf("\t2. Perbarui Stok Barang\n");
        printf("\t3. Tampilkan Daftar Barang\n");
        printf("\t4. Keluar\n");
        printf("\tPilih (ketikkan angka): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahBarang();
                break;
            case 2:
                perbaruiStok();
                break;
            case 3:
                tampilkanDaftarBarang();
                break;
            case 4:
                printf("\tKeluar dari program.\n");
                break;
            default:
                printf("\tPilihan tidak valid, coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}

// Fungsi untuk menambah barang
void tambahBarang() {
    if (jumlah_barang < MAX_BARANG) {
        struct Barang barang_baru;
        barang_baru.id = jumlah_barang + 1;

        printf("Masukkan nama barang: ");
        scanf("%s", barang_baru.nama);
        printf("Masukkan stok awal: ");
        scanf("%d", &barang_baru.stok);

        inventaris[jumlah_barang] = barang_baru;
        jumlah_barang++;

        printf("Barang berhasil ditambahkan!\n");
    } else {
        printf("Inventaris penuh, tidak bisa menambah barang lagi.\n");
    }
}

// Fungsi untuk memperbarui stok barang
void perbaruiStok() {
    int id, stok_baru;
    printf("Masukkan ID barang yang ingin diperbarui: ");
    scanf("%d", &id);

    if (id > 0 && id <= jumlah_barang) {
        printf("Masukkan stok baru: ");
        scanf("%d", &stok_baru);

        inventaris[id - 1].stok = stok_baru;
        printf("Stok barang berhasil diperbarui!\n");
    } else {
        printf("ID barang tidak ditemukan.\n");
    }
}

// Fungsi untuk menampilkan daftar barang
void tampilkanDaftarBarang() {
    printf("\n\tDaftar Barang:\n");
    printf("ID\tNama\t\tStok\n");
    printf("-----------------------\n");

    for (int i = 0; i < jumlah_barang; i++) {
        printf("%d\t%s\t\t%d\n", inventaris[i].id, inventaris[i].nama, inventaris[i].stok);
    }
    printf("\n");
}

