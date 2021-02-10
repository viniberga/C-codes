#include<stdio.h>

int main(){
	
	int i;
	int num[5], num2[5], num3[5];
	
	printf("Mostrar vetores na tela\n");
	printf("Insira os valores do vetor A:\n");
		
	for(i=0; i<5; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\n");
	
	printf("Insira os valores do vetor B:\n");
		
	for(i=0; i<5; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &num2[i]);
	}
	
	printf("valores lidos no vetor A: ");
	for(i=0; i<5; i++){
		printf("%d ", num[i]);		
	}
	
	printf("\n");
	
	printf("valores lidos no vetor B: ");
		for(i=0; i<5; i++){
		printf("%d ", num2[i]);		
	}
	
	printf("\n");

	printf("Soma dos vetores:");
		for(i=0; i<5; i++){
			num3[i] = num[i] + num2[i];
			printf(" %d", num3[i]);
		}
	return 0;
}
