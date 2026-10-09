#include <stdio.h>

int main () {
    int harga_a = 4000000;
    int harga_b = 3500000;
    float diskon_a, harga_diskon_a;
    float diskon_b, harga_diskon_b;

    diskon_a = harga_a * 13.0 / 100;
    harga_diskon_a = harga_a - diskon_a;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", harga_diskon_a);
    
    diskon_b = harga_b * 21.0 / 100;
    harga_diskon_b = harga_b - diskon_b;
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", harga_diskon_b);

    return 0;
}