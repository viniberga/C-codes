#include<stdio.h>

int main(){

int a[5], b[5], maior, menor, r1, r2;
int i;

printf("Maior e menor valor entre duas matrizes\n");

printf("Insira os valores da matriz A:\n");
for(i = 0; i < 5; i++){
    printf("Valor %d: ", i+1);
    scanf("%d", &a[i]);
}
printf("Insira os valores da matriz B:\n");
for(i = 0; i < 5; i++){
    printf("valor %d: ", i+1);
    scanf("%d", &b[i]);
}
maior = a[0], b[0];
menor = a[0], b[0];

for(i = 0; i < 5; i++){
    if(a[0] > b[0]){
        r1 = a[i];
    }
    else if(b[0] > a[0]){
        r1 = b[i];
    }
}
for(i = 0; i < 5; i++){
    if(a[i] > r1){
        r1 = a[i];
    }
    else if(b[i] > r1){
        r1 = b[i];
    }
}
for(i = 0; i < 5; i++){
    if(a[0] < b[0]){
        r2 = a[i];
    }
    else if(b[0] < a[0]){
        r2 = b[i];
    }
}
for(i = 0; i < 5; i++){
    if(a[i] < r2){
        r2 = a[i];
    }
    else if(b[i] < r2){
        r2 = b[i];
    }
}

printf("Valores de A: ");
for(i = 0; i < 5; i++){
    printf("%d ", a[i]);
}
printf("\nValores de B: ");
for(i = 0; i < 5; i++){
    printf("%d ", b[i]);
}
printf("\nMaior = %d ", r1);
printf("\nMenor = %d ", r2);
    return 0;
}