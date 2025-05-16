#include <stdio.h>
#include <stdlib.h>
#define MAX 40

struct tCidades{
	char nome[MAX+1];
};

int** alocacaoMatriz(int m, int n);
int** desalocaMatriz(int m, int **matriz);
void impressao(int m, int n, int **mat);

void leArquivo(int &n, tCidades *&vetor, int **&distancias);
void consulta(int n, tCidades* vetor, int** distancias);

int main()
{
	tCidades *vetor = NULL;	// vetor de cidades
	int **distancias = NULL; // matriz de distancias entre cidades
	int n;					// numero de cidades

	// leitura do arquivo
	leArquivo(n, vetor, distancias);

	// dados foram lidos? Se sim, vetor != NULL
	if(vetor != NULL)
	{	
		consulta(n, vetor, distancias);

		// apagando as variaveis dinamicas
		free(vetor);
		distancias = desalocaMatriz(n, distancias); 
	}
	return 0;
}


void consulta(int n, tCidades* vetor, int** distancias)
{
    printf("Informe o indice das cidades que deseja imprimir: ");
    scanf("%d", &n);
    






}

void leArquivo(int &n, tCidades *&vetor, int **&distancias)
{
	FILE* arq = fopen("cidades.txt", "r");

	if(arq == NULL)
		printf("arquivo nao pode ser aberto\n");
	else{
		fscanf(arq, "%d", &n);
		vetor = (tCidades*) calloc (n, sizeof(tCidades));
		distancias = alocacaoMatriz(n, n);

		if(vetor == NULL || distancias == NULL)
			printf("Erro de alocacao no vetor/matriz\n");
		else{
			// leitura dos nomes das cidades
			for(int i = 0; i < n; i++)
				fscanf(arq, " %[^\n]", vetor[i].nome);

			// leitura da matriz de distancias
			for(int i = 0; i < n; i++)
				for(int j = 0; j < n; j++)
					fscanf(arq, "%d", &distancias[i][j]);

			fclose(arq);
		}
	}
}



int** desalocaMatriz(int m, int **matriz)
{
	int i;

	for(i = 0; i < m; i++)
		free(matriz[i]);
	free(matriz);

	return NULL;
}


int** alocacaoMatriz(int m, int n)
{
	int **A;				
	int i;

	A = (int **) calloc(m, sizeof(int*)); 
	if(A == NULL)
		return NULL;
	for(i = 0; i < m; i++){
		A[i] = (int *) calloc(n, sizeof(int));
		if(A[i] == NULL)
			return NULL;
	}

	return A;
}





void impressao(int m, int n, int **mat)
{
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			printf("%d ", mat[i][j]);

		printf("\n"); 
	}
}
