#include<ctype.h>   // toupper, tolower
#include<stdio.h>
#include "lista.h"


int main()
{
    char str[40];
    celula *letras = NULL;  // lista com as letras 
    celula *digitos = NULL; // lista com os digitos/algarismos
    celula *p;
    

    printf("Digite uma sequencia de caracteres alternando letra e algarismo: ");
    scanf("%s", str);

    // criando uma nova lista
    int i =0;
    while(str[i] !='\0')
    {
        if(toupper(str[i]) >= 'A' && toupper(str[i]) <= 'Z'){
            inserir_fim(str[i], letras);
        }
        else{
            inserir_inicio(str[i], digitos);
        }
        i++;
    }
    // Concatenação das letras 
    p = letras;
    while(p->prox != NULL){
        p = p->prox;
    p->prox = digitos;
    imprimir(letras);
    desalocar(letras);
    printf("\n");


    }

    return 0;
}