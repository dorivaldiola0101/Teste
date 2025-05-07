#include <stdio.h>

int pot(int x, int n){
    if(n == 0 || x == 1)
        return 1;

    else if(n == 1)
        return x;

    else return x * pot(x, n-1);
    
    }

int main(){

    int x , n;
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &n);
    printf("\n%d\n", x * pot(x, n-1));







}