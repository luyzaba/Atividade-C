/*/Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10./*/
#include <stdio.h>

int main() {
	int soma, maior, menor, numero,i;
	
	printf("Entre com o 1o numero inteiro: ");
 	scanf("%i", &numero); 
 	
 	maior=numero;
 	menor=numero;
 	soma += numero;
	
	if (numero<=10){
		for(i=1; i<10; i++){
 		printf("\nEntre com o %do numero inteiro: ",i+1);
 		scanf("%i", &numero);
 		soma += numero;

 		if(numero>maior)
 			maior=numero;
 		else
 			if(numero<menor)
 				menor=numero;
 		} 
 		
 	float media = (float) soma / 10;
	printf("Média dos números e : %.2f\n", media);
 
 	printf("\nO menor numero entrado e: %d", menor);
	printf("\nO maior numero entrado e: %d", maior);
	printf("\nsoma e: %i", soma);
		
	}
	else{
		printf("Número entre 0 a 10");
	}
	
}