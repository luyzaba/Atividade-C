#include <stdio.h>
#include <locale.h>

int main()
{
	int num;
	setlocale (LC_ALL, "");
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	if (num %2 == 0 && num < 15){
		printf("Este n�mero � par e menor que 15!\n");
	}
	
	if (num %2 == 0 && num > 15){
		printf("Este n�mero � par e maior que 15!\n");
	}
	
	if (num %2 != 0 && num < 50){
		printf("Este n�mero � �mpar e menor que 50!\n");
	}
	
	if (num %2 != 0 && num > 50){
		printf("Este n�mero � �mpar e maior que 50!\n");
	}
}