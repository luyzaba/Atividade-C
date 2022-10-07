#include <stdio.h>
#include <locale.h>

int main()
{
	float tempC, tempF, tempK;
	
	// Entrada (Coletar o valor da temperatura) 
	printf("Digite o valor da temperatura em Fahrenheit: ");
	scanf("%f", &tempF);

	// Processamento ( Calcúlo de Conversão)
	
	tempC = (tempF - 32) * 5/9;
	tempK = (tempF - 32) * 5/9 + 273,15;

	// Saida (Mostrar os valores já convertidos na tela)
	
	printf("A temperatura em Fahrenheit %.2f convertida para graus celsius e = %.2f \n", tempF, tempC);
	printf("A temperatura em Fahrenheit %.2f convertida para graus Kelvin e = %.2f ", tempF, tempK);


}