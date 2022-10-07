#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Portuguese");
	
	int i, num;
	// Entrada - Nao Tem
	
	//Processamento
	for (i= 1; i<=50; i++)
	{
		num= i%2;
		if (num%2==0)
		
	//Saida	
		printf("Lista de numeros pares de 1 a 50 abaixo: %d\n", i);
	}
}
