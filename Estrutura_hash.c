#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct No{
	int dados;
	int chave;
	struct No *prox;
}No;

typedef struct hash{
	int posicao;
	No *inicio;
	No *elementos;
	int tamanho;
}Hash;

// Função de inciar a lista Hash:
void Iniciar_Hash(Hash *h){
	h->posicao = 0;
	h->elementos = NULL;
	h->inicio = NULL;
}

// Função para inserir valores na lista Hash:
void Inserir_Hash(Hash *h, int tam ,int chave, int valor){
	int resultado;
	hash *novo_hash = (Hash*) malloc(tam * sizeof(Hash));
	No *novo_no = (No*) malloc(tam * sizeof(No));
	novo_no->dados = valor;
	novo_no->chave = chave;
	novo_no->prox = h->inicio;
	h->inicio = novo_no;
	resultado = chave % tam;
	h->posicao = resultado;
	h->tamanho++;
	
	
}



int main(){
	Hash *hash;
	int tamanho, chave, valor;
	Iniciar_Hash(&hash);
	
	printf("Informe um tamanho para estrutura Hash: ");
	scanf("%d", &tamanho);
	printf("Informe um chave:");
	scanf("%d", &chave);
	printf("Digite um valor: ");
	scanf("%d", &valor);
	Inserir_Hash(&hash,tamanho,chave,valor);
	
}
