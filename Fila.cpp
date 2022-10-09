#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Fila{
	int capacidade;
	int *dados;
	int inicio;
	int fim;
	int nItens;
};

void Criar_Fila(Fila *f, int c){
	f->capacidade = c;
	f->dados = (int*) malloc(f->capacidade * sizeof(int));
	f->inicio = 0;
	f->fim = -1;
	f->nItens = 0;
}

void Enfilerar(Fila *f, int valor){
	if(f->fim == f->capacidade -1){
		f->fim = -1;
	}else{
		f->fim++;
		f->dados[f->fim] = valor;
		f->nItens++;
	}
}

int Desenfilerar(Fila *f){
	int aux = f->dados[f->inicio++];
	
	if(f->inicio == f->capacidade){
		f->inicio = 0;
	}else{
		f->nItens++;
		return aux;
	}
}

int main(){
	Fila *f = (Fila*) malloc(sizeof(Fila));
	
	int cap, valor, aux;
	cout<<"INFORME UM TAMANHO PARA FILA: "<<endl;
	cin>>cap;
	Criar_Fila(f,cap);
	
	for(int i = 0; i < cap; i++){
		cout<<"<< INFORME UM VALOR: "<<endl;
		cin>>valor;
		Enfilerar(f,valor);
	}
	
	aux = Desenfilerar(f);
	cout<<"Elemento Removido: "<<aux<<endl;
	
}