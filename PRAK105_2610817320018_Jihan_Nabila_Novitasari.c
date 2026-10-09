#include <stdio.h>

int main () {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int hasil;

    printf("variable a bernilai %d\n", a);
    printf("variable b bernilai %d\n", b);
    printf("variable x bernilai %d\n", x);
    printf("variable y bernilai %d\n", y);
    
    hasil = (a % b) + (x % y);
    printf("total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", hasil);

    return 0;
}