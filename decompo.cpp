#include <stdio.h>

void decompor(float x, int *parte_inteira, float *parte_fracionaria) {
    *parte_inteira = (int) x;
    *parte_fracionaria = x - *parte_inteira;
}

int main() {
    float num;
    float b;
    int a;

    scanf("%f", &num);

    decompor(num, &a, &b);

    printf("Número: %f\n", num); 
    printf("Parte inteira: %d\n", a); 
    printf("Parte fracionária: %f\n", b);

    return 0;
}
