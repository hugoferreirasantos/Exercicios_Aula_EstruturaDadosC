#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct No{
	int dados;
	struct No *prox;
}No;

typedef struct{
	int posicao;
	No *inicio;
	int tam;
}Hash;

//Função de Inicialização:
void Inicializar(Hash *h){
	h->posicao = 0;
	h->inicio = NULL;
	h->tam = 0;
}

//Função de Inserção:
void Inserir(Hash *h, int valor, int tamanho){
	int resultado, aux;
	No *novo_no = (No*) malloc(tamanho * sizeof(No));
	novo_no->dados = valor;
	novo_no->prox = h->inicio;
	resultado = valor % tamanho;
	h->posicao = resultado;
	h->inicio = novo_no;
	h->tam++;

}

void Exibir(Hash *h){
	No *inicio = h->inicio;
	while(inicio != NULL){
		printf("%d", h->posicao);
		printf("%d", inicio->dados);
		printf("\n");
		inicio = inicio->prox;
	}
	printf("\n \n");
}


int main(){
	Hash hash;
	Inicializar(&hash);
	
	int opicao, valor, tam;
	
	printf("Digite um tamnho:");
	scanf("%d", &tam);
	
	do{
		printf("\n 1 - Inserir no Inicio \n 2 - Imprimir  \n 5 - Sair \n");
		scanf("%d", &opicao);
		switch(opicao){
			case 1:
				printf("Digite o valor:");
				scanf("%d", &valor);
				Inserir(&hash, valor,tam);
				break;
			case 2:
				Exibir(&hash);
			case 5:
				printf("\n FINALIZANDO PROGRAMA: ");
				break;
			default:
				printf("\n Opicao invalida: ");
		}
		
	}while(opicao != 5);
	
}
