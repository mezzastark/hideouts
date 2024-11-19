#include <stdio.h>
int main() {
    int n, i;
    printf("berapa banyak angka yang dihitung? "); scanf("%d", &n);

    int arr[n];
    printf("masukkan angka %d :\n", n); 
    for (i = 0; i < n; i++) { scanf("%d", &arr[i]);}
    
    int hasil = summary(arr, n);
    printf("total dari penjumlahan angka genap: %d\n", hasil);

}
int genap(int nmr) {
    return nmr % 2 == 0;
}
int summary(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (genap(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}