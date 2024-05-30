#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
long int variable_number, interactions;
double **Matrix;

int main(){
    printf("escreva o numero de variáveis que estamos trabalhando: ");scanf("%ld", &variable_number);
    printf("\nescreva o numero de interacoes a serem feitas: ");scanf("%ld", &interactions);
    printf("Descreva a Matrix:\nEX Matrix de 3 variaveis:\n2X1+6X2-1X3=5\n3X1+0X2+8X3=2\n1X1+3X2-5X3=0\n");

    return 0;
}

void get_Matrix(){
    for(int i = 0; i<variable_number; i++){
        
    }

}