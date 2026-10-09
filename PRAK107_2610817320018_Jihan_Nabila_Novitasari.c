#include <stdio.h>

int main() {
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;
    int harga_per_meter = 85000;
    int keliling, biaya;

    keliling = sisi_a + sisi_b + sisi_c;
    biaya = keliling * harga_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengkle(k) adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);

    printf("\nJawaban :\n");
    printf("Biaya yang diperlukan Pak Dengkle(k) adalah : Rp %d\n", biaya);

    return 0;
}