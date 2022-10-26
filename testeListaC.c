#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct No{
	int dados;
	struct No *prox;
}No;

typedef struct Lista{
	No *inicio;
	int tam;
}Lista;

void InicializarLista(Lista *l){
	l->inicio = NULL;
	l->tam = 0;
}

// Função para inserir no inicio:
void InserirInicio(Lista *l, int valor){
	No *novo = (No*) malloc(sizeof(No));
	novo->dados = valor;
	novo->prox = l->inicio;
	l->tam++;
}

void Imprimir(Lista *l){
	No *inicio = l->inicio;
	while(inicio != NULL){
		printf("%d ", inicio->dados);
		inicio = inicio->prox;
	}
	printf("\n \n");
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	Lista lista;
	InicializarLista(&lista);
	
	int valor, opicao;
	do{
		printf("\n 1- Inserir no inicio da lista: \n 2- Imprimir:  \n 5- Sair: \n");
		scanf("%d", &opicao);
		switch(opicao){
			case 1:
				printf("Digite um valor para o inicio da lista: ");
				scanf("%d", &opicao);
				InserirInicio(&lista, valor);
				break;
			case 2:
				printf("\n LISTA \n");
				Imprimir(&lista);
				break;
			case 5:
				printf("\n Programa encerrado: ");
				break;
			default:
				printf("\n Opicao Inválida: ");
		}
		
	}while(opicao != 5);
	
}
