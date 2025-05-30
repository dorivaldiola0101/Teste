#include<stdlib.h>
#include<string.h>
#include "listaMC.h"





void inserirM(marca*& L, int codigo, float nota)
{
    marca *nova_marca;
    nova_marca = (marca*) calloc(1,sizeof(marca));
    nova_marca->codigo = codigo;
    nova_marca->nota = nota;

    // Lista está vazia, passará a apontar para o novo nó
    if(L == NULL)
        L = nova_marca;
    else{
        marca *p = L;
        while(p->prox != NULL)
            p = p->prox;

        
        p->prox = nova_marca;
    }


}

float buscaMarca(marca* M, int codigo)
{
    marca *p;
    for(p = M; p != NULL; p = p->prox)
    {
        if(p->codigo == codigo)
            return p->nota;
    }
    return 0.0; // Marca nao foi encontrada;


}


void inserirC(carro*& C , char * modelo, int codigo, int ano)
{
    carro *novo;
    novo = (carro*)calloc(1, sizeof(carro));
    strcpy(novo->modelo , modelo);
    novo->ano = ano;
    novo->codigomarca = codigo;


    novo->prox = C;
    C = novo;
}




void listagem(marca* M , carro* C)
{
    float nota;
    for(carro *p = C; p != NULL; p = p->prox){
        nota = buscaMarca(M, p->codigomarca);
        printf("%s %d %.2f", p->modelo, p->ano, nota);
    }
}


void removerM(marca*& , carro* , int )
{

}


void desalocaMarca(marca *&)
{

}


void desalocaCarro(carro *&)
{

}

