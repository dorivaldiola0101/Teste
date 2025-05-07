/*Programa le e imprime um vetor de n números inteiros 
(n <= 10) */

#include<stdio.h>
#define MAX 10

void leitura(int n, int v[MAX]);

void impressao(int n, int v[]); // recebe um vetor com n elementos para serem impressos

int main()
{
	int vetor[MAX];
	int n;

	printf("Digite num elementos do vetor: ");
	scanf("%d", &n); 

	leitura(n, vetor);
	printf("Os %d numeros digitados sao: ", n); 
	impressao(n, vetor);

	printf("\n");
	return 0;
}

// funcao le um vetor com n elementos
void leitura(int n, int v[MAX])
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
}

// funcao imprime um vetor de n elementos
void impressao(int n, int v[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
}