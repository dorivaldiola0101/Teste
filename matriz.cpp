/*Programa le e imprime um vetor de n números inteiros 
(n <= 10) */

#include<stdio.h>
#define MAX 10

void leitura(int m, int n, int mat[MAX][MAX]);

void impressao(int m, int n, int mat[][MAX]);

int main()
{
	int matriz[MAX][MAX];
	int linhas, colunas;

	printf("Digite num linhas: ");
	scanf("%d", &linhas); 

	printf("Digite num colunas: ");
	scanf("%d", &colunas); 

	leitura(linhas, colunas, matriz);

	printf("Os numeros digitados foram: \n"); 
	impressao(linhas, colunas, matriz);

	printf("\n");
	return 0;
}

// funcao le um vetor com n elementos
void leitura(int m, int n, int mat[MAX][MAX])
{
	int i, j;
	for (i = 0; i < m; i++) // for para a linha
	{
		for(j = 0; j < n; j++) // for para a coluna
			scanf("%d", &mat[i][j]);
	}
}

// funcao imprime um vetor de n elementos
void impressao(int m, int n, int mat[][MAX])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ", mat[i][j]);

		printf("\n");
	}
}