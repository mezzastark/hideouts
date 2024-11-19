#include <stdio.h>
int total(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
float rerata(int arr[], int n) {
    int sum = total(arr, n);
    return (float)sum / n;
}

int main() {
    int n, i;
    printf("Masukkan jumlah data: "); scanf("%d", &n);

    int arr[n];
    printf("Masukkan %d angka:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = total(arr, n);
    float avg = rerata(arr, n);

    printf("Jumlah: %d\n", sum);
    printf("Rata-rata: %.2f\n", avg);

    return 0;
}
