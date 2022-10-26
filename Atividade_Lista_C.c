#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Definindo structs:
typedef struct No{
	int dados;
	struct No *prox;
}No;

typedef struct{
	No *inicio;
	int tam;
}Lista;

// Função para inicializar:
void Inicializar(Lista *l){
	l->inicio = NULL;
	l->tam = 0;
}

// Função para Inserir elementos no Incio da Lista:
void Inserir(Lista *l, int valor){
	No *novo = (No*) malloc(sizeof(No));
	novo->dados = valor; // (*novo).dados = valor;
	novo->prox = l->inicio;
	l->inicio = novo;
	l->tam++;
	
}

// Função para Inserir no final da lista:
void InserirFim(Lista *l, int valor){
	No *no, *novoF = (No*) malloc(sizeof(No));
	novoF->dados = valor;
	novoF->prox = NULL;
	
	if(l->inicio == NULL){ // Se estiver vázia: 
		l->inicio = novoF;
	}else{
		no = l->inicio;
		while(no->prox != NULL){
			no = no->prox;
		}
		no->prox = novoF;
	}
	l->tam++;
}

// Função para imprimir elementos da lista:
void Imprimir(Lista *l){
	No *inicio = l->inicio;
	while(inicio != NULL){
		printf("%d ", inicio->dados);
		inicio = inicio->prox;
	}
	printf("\n \n");
}


// Função principal:
int main(){
	Lista lista;
	
	int opicao, valor;
	
	Inicializar(&lista);
	
	do{
		printf("\n 1- Inserir no inicio \n 2- Imprimir \n 3- Inserir no fim da Lista \n 5-  Sair \n ");
		scanf("%d", &opicao);
		switch(opicao){
			case 1:
				printf("Digite um valor: ");
				scanf("%d", &valor);
				Inserir(&lista, valor);
				break;
			case 2:
				Imprimir(&lista);
				break;
			case 3:
				printf("Digite um valor para colocar no fim da lista: ");
				scanf("%d", &valor);
				InserirFim(&lista,valor);
				break;
			case 5:
				printf("\n Finalizando o programa: ");
				break;
			default:
				printf("\n Opicao Invalida: ");
					
		}
	}while(opicao != 5);
	
		
	
		
	
	
	
}
