// EXERCICIO 2
#include<stdio.h>
#include<stdlib.h>	// calloc, malloc, free

#define MAX 20

void gerarSaida(int *vetor, int n, int pares, int impares);

int main()
{
	FILE* arq;	// variavel p/manipular o arquivo 
	char nomearq[MAX+1];
	int n;		// qtde de elementos a serem lidos
	int *vetor;	// vetor dinamico
	int pares = 0, impares = 0;

	// nome do arquivo
	scanf(" %s", nomearq);

	// abrir o arquivo
	arq = fopen(nomearq, "r"); // r - read
	if(arq == NULL)
		printf("Arquivo nao pode ser aberto\n");
	else{
		// entrada dos numeros do arquivo
		fscanf(arq,"%d", &n);

		vetor = (int*) calloc (n, sizeof(int));
		if(vetor == NULL){
			printf("Erro de alocacao no vetor\n");
			fclose(arq);
			return 0;
		}
		for(int i = 0; i < n; i++)
		{
			fscanf(arq,"%d", &vetor[i]);

			if(vetor[i] % 2 == 0)
				pares++;
			else impares++;
		}
		fclose(arq);

		// gerar saida
		gerarSaida(vetor, n, pares, impares);

		free(vetor);
	}
	return 0;
}

// gerando os dados no arquivo de saida
void gerarSaida(int *vetor, int n, int pares, int impares)
{
	char nomearq[MAX+1];
	FILE *saida;
	int i;

	// nome do arquivo de saida
	scanf(" %s", nomearq);
	saida = fopen(nomearq, "a");
	if(saida == NULL)
		printf("Arquivo %s nao pode ser aberto\n", nomearq);
	else{
		fprintf(saida, "%d\n", pares);
		for(i = 0; i < n; i++)
		{
			if(vetor[i] % 2 == 0)
				fprintf(saida, "%d ", vetor[i]);
		}
		fprintf(saida, "\n%d\n", impares);
		for(i = 0; i < n; i++)
		{
			if(vetor[i] % 2 == 1)
				fprintf(saida, "%d ", vetor[i]);
		}

		fclose(saida);
	}

} 
