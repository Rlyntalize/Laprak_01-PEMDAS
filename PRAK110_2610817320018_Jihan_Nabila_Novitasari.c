#include <stdio.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    int sisi_a = tinggi;
    int sisi_b = 13;
    int sisi_c = alas;
    int keliling, luas;

    keliling = sisi_a + sisi_b + sisi_c;
    luas = alas * tinggi / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);

    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %d cm\n", sisi_c);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm2\n", luas);

    return 0;
}   