#include <stdio.h>

int main() {
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float hasil;

    hasil = (float) a + b * x / y;

    printf("variable a bernilai %d\n", a);
    printf("variable b bernilai %d\n", b);
    printf("variable x bernilai %d\n", x);
    printf("variable y bernilai %d\n", y);

    printf("hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}