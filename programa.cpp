/****************
LEIA UM NUMERO. SE UM NUMERO FOR POSITIVO (>0), CALCULE A RAIZ QUADRADA. 
CASO CONTRARIO, MOSTRE UMA MENSAGEM QUE O NUMERO E INVALIDO
*****************/

/* ESTRUTURA CONDICIONAL

 if (CONDICAO){
    conj de instrucoes   
 }
 else
 { 

 }



 if()
    instrucao;
 else
    instrucao;
 */



#include <stdio.h>
#include <math.h> // sqrt, pow, ceil, floor

int main()
{
    int numero;
    float raiz;

    scanf("%d", &numero);

    if(numero > 0)
    {    
        raiz = sqrt(numero);
        printf("%f", raiz);
    }
    else
        printf("Numero é inválido.");
    

    printf("\n");
    return 0; 
}