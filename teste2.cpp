// EXERCICIO1.cpp


#include<stdio.h>
#define MAX 20


int main()
{
	FILE* arq;	// variavel p/manipular o arquivo 	
	char nomearq[MAX+1];
	int n;		// qtde de elementos a serem lidos
	int num;
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

		for(int i = 1; i <= n; i++)
		{
			fscanf(arq,"%d", &num);

			if(num % 2 == 0)
				pares++;
			else impares++;
		}

		printf("Pares: %d\n", pares);
		printf("Impares: %d\n", impares);

		fclose(arq);
	}
	return 0;
} 