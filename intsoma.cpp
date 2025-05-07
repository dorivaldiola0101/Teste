#include <stdio.h>

int soma(int n){
    if(n ==1)
    return 1;

    else return soma(n-1) + n;
}


int main(){
    int n;
    printf("Informe um numero n qualquer para a soma: ");
    scanf("%d",&n);

    printf("\nSoma de n: %d\n", soma(n));

}