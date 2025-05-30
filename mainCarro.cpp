#include<stdio.h>
#include<stdlib.h>
#include "listaMC.h"


/*funcao main*/
int main()
{
    int op;
    marca  *LMarca = NULL;  // Lista de marca inicialmente fazia;
    carro *LCarro = NULL;
    int codigo; // Código da marca;
    float nota; // Nota do modelo da marca;



    char modelo[40];
    int ano;




    do
    {
        printf("\n1 - Cadastrar uma marca");
        printf("\n2 - Cadastrar um carro");
        printf("\n3 - Listagem de carros");
        printf("\n4 - Exclusao de uma marca");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("Digite o codigo e a nota da marca: ");
            scanf("%d %f", &codigo, &nota);
            inserirM(LMarca, codigo, nota);
            printf("Marca cadastrada com sucesso!\n");
        }
        else if(op == 2)
        {
            printf("Digite o codigo da marca do carro: ");
            scanf("%d", &codigo);
            if(buscaMarca(LMarca, codigo) == 0.0)
            {
                printf("Marca nao encontrada\n");
            }
            else{
                printf("Digite o modelo do carro: ");
                scanf(" %[^\n]", modelo);
                printf("Digite o ano do carro: ");
                scanf("%d", &ano);
                inserirC(LCarro, modelo, ano, codigo);
            }
            

        }
        else if(op == 3){


        }
        else if(op == 4){


        }

    }while(op != 5);

    // desalocar listas

    return 0;
}