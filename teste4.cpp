//////////////
// intercala.cpp
#include<stdio.h>
#include<string.h>
#include<stdlib.h>	// calloc, malloc, free

#define MAX 30


int main()
{
	FILE *arq1, *arq2, *saida;	// variavel p/manipular o arquivo 
	char nome1[MAX+1], nome2[MAX+1];

	
	// abrir o arquivo
	arq1 = fopen("arq1.txt", "r"); // r - read
	arq2 = fopen("arq2.txt", "r"); // r - read
	if(arq1 == NULL || arq2 == NULL)
		printf("Arquivo nao pode ser aberto\n");
	else{
		saida = fopen("saida.txt", "w"); // a - escrita sem sobrescrever
		if(saida == NULL)
			printf("Arquivo de saida nao pode ser aberto\n");
		else{
			fscanf(arq1, " %s", nome1);
			fscanf(arq2, " %s", nome2);
			while(feof(arq1)==0 && feof(arq2)==0){
				// escreve o menor na saida
				if(strcmp(nome1, nome2) < 0) // nome1 eh o menor
				{
					fprintf(saida, "%s\n", nome1);
					fscanf(arq1, " %s", nome1);
				}
				else{
					fprintf(saida, "%s\n", nome2);
					fscanf(arq2, " %s", nome2);
				}
			}
			// copiando o que falta do arquivo 1 (se ele terminar primeiro)
			while(feof(arq1)==0) 
			{
				// escreve o nome na saida
				fprintf(saida, "%s\n", nome1);
				fscanf(arq1, " %s", nome1);
			}
			// copiando o que falta do arquivo 2 (se ele terminar primeiro)
			while(feof(arq2)==0) 
			{
				// escreve o nome na saida
				fprintf(saida, "%s\n", nome2);
				fscanf(arq2, " %s", nome2);
			}
			fclose(saida);
		}
		fclose(arq1);
		fclose(arq2);
	}
	return 0;
}