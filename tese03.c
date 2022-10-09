#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	char nome[10];
	int num;
};

int main(){
	struct Aluno *v;
	int tamVet;
	
	printf("INSIRA UM TAMANHO PARA A LISTA DE ALUNOS: \n");
	scanf("%d",&tamVet);
	
	v = (Aluno*) malloc(tamVet * sizeof(Aluno));

	
	for(int i = 0; i < tamVet; i++){
		printf("Insira o nome do %d aluno: \n", i+1);
		scanf("%s ",vetor[i].nome);
		printf("Digite %d numero do aluno: ", i+1);
		scanf("%s", &vetor[i].num);
	}
	
}
