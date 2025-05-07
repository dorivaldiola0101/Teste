#include <stdio.h>
#define MAX 50
#define TAM 20
struct tipoProduto{
    int codigo;
    char nome[MAX+1];
    double preco;
};

void cadastrar(int n, tipoProduto vetor[]) {
    for(int i = 0; i < n; i++ ){
        printf("\nCódigo: ");
        scanf("%d", &vetor->codigo);
        printf("\nNome: ");
        scanf(" %[^\n]", vetor->nome);
        printf("\nPreco: ");
        scanf("%lf", &vetor->preco);
    }
};
void listagem(int n, tipoProduto vetor[]){
    for(int i = 0; i < n; i++){
        printf("%d %s\n", vetor[i].codigo, vetor[i].nome);
    }
    }
double consultar(int codigo, int n, tipoProduto vetor[]){
    for(int i = 0; i < n; i++){
        if(vetor[i].codigo == codigo)
        return vetor[i].preco;
    }
    return -1.0;
}



int main(){
    int n; // numero de produtos a serem cadastrados (armazenados no vetor)
    tipoProduto vetor[TAM];
    int codigo; 
    double preco;
    printf("Qtde de produtos: ");
    scanf("%d", &n);

    cadastrar(n, vetor);

    listagem(n, vetor);
    printf("\nCodigo a consultar: ");
    scanf("%d", &codigo);
    while(codigo!=0){
        preco = consultar(codigo, n, vetor);
        if(preco == -1) 
            printf("Codigo nao existe\n");
        else 
            printf("Preco do produto: %f\n", preco);
        printf("\nCodigo a consultar: ");
        scanf("%d",&codigo);
        

    };

    return 0;

}
