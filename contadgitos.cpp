#include <stdio.h>


int contadigitos(int n){
    if (n <= 9)
        return 1;

    else 
        return contadigitos(n/10) + 1;
}


int main(){
    int n;
    printf("Digite o seu numero: ");
    scanf("%d", &n);

    printf("\nContagem dos digitos: %d\n", contadigitos(n));
}