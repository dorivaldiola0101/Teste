#include<stdio.h>

#define NUMQ 5



int acertos(char *gab, char *resp);

int main()
{
	char gabarito[NUMQ+1];	
	char respostas[NUMQ+1];
	
	int n;	// numero de alunos
	int i;

	// leitura do gabarito
	printf("Informe o gabarito: ");
	scanf(" %s", gabarito);                 //dcdab - forma de leitura do gabarito;
	
	// leitura das respostas de cada aluno com a impressao do total de acertos
	printf("Informe qtde de alunos: ");
	scanf("%d", &n);
    for(i =1; i <=n; i++){
        // Ler as repostas dos alunos;      //aaaaaa - forma de leitura da resposta do aluno;
        printf("Informe as respostas dos alunos: ");
        scanf(" %s", respostas);

        // Contar os acertos;
        printf("Acertos: %d", acertos(gabarito, respostas));
    }


	return 0;
}
int acertos(char *gab, char *resp)
{
   int cont = 0;
   char *p , *q;
   p = gab;
   q = resp;
    while(*p != '\0'){
        if(*p == *q)
            cont++;
    }
    return cont;
     
}
