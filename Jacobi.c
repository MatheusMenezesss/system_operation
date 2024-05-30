#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
long int variable_number, interactions;
double **Matrix;

void Matrix_create();
void Matrix_destruct();

int main(){
    printf("escreva o numero de variáveis que estamos trabalhando: ");scanf("%ld", &variable_number);
    printf("escreva o numero de interacoes a serem feitas: ");scanf("%ld", &interactions);
    printf("Descreva a Matrix:\nEX Matrix de 3 variaveis:\n2X1+6X2-1X3=5\n3X1+0X2+8X3=2\n1X1+3X2-5X3=0\n");

    return 0;
}

void add_char(char *string, char caracter){
    if(string){
    }else{

    }
}

char* get_string(){
    char carac, *string;
    string = NULL;

    do{
        scanf("%c", &carac);
        if(carac != '\n'){

        }
    }while (carac != '\n');
    
}

void get_Matrix(){
    char *aux = (char*) malloc(sizeof(char)*50); //vamos assumir que o numero de caracteres das equações não passe de 49
    int count_caracter;
    for(int i = 0; i<variable_number; i++){
    }

}

void Matrix_create(){
    Matrix = (double*) malloc(sizeof(double*) * variable_number);
    for(int i = 0; i < variable_number; i++){
        Matrix[i] = (double*) malloc(sizeof(double) * variable_number);
    }
}

void Matrix_destruct(){

}
