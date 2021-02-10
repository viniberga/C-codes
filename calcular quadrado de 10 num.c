#include<stdio.h>
#include<math.h>

int main(){
	
	int num[10];
	int result[10];
	
	for(int i = 0; i <= 9; i++){
		
		printf("valor: \n");
		scanf("%d", &num[i]);
	}
	for(int i = 0; i <= 9; i++){
		
		printf("%d ", num[i]);
	}
	printf("\n");
	for(int i = 0; i <= 9; i++){
	
		result[i] = pow(num[i], 2);
		printf("%d ", result[i]);
	}
	return 0;
}
