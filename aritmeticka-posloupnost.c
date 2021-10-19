#include <stdio.h>

int an(int a1, int d, int n) {
    return a1 + (n - 1) * d;
}

void generuj(int a1, int d, int n) {
    while (n > 0) {
        printf("%d ", a1);
        a1 += d;
        n--;
    }
}

int main() {
    printf("%d\n", an(0, 1, 5));
    generuj(0, 1, 10);
    return 0;
}