#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Pilha{
    int capacidade;
    int topo;
    int *dados;
    
};

void Criar_Pilha(Pilha *p, int tamanho){
    p->capacidade = tamanho;
    p->topo = -1;
    p->dados = (int*) malloc(p->capacidade * sizeof(int));
}

void Enpilhar(Pilha *p, int valor){
    if(p->topo == p->capacidade -1){
        cout<<"Pilha Cheia: "<<endl;
    }else{
        p->topo++;
        p->dados[p->topo] = valor;
    }
}

int Desenpilhar(Pilha *p){
    int dado;
    if(p->topo == -1){
        cout<<"Pilha Vazia: "<<endl;
    }else{
        dado = p->dados[p->topo];
        p->topo--;
        return dado;
    }
}

int main(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    // Criando e difinindo um tamanho para Pilha:
    int tam, valor, aux;
    cout<<"DEFINA UM TAMANHO PARA A PILHA: "<<endl;
    cin>>tam;
    Criar_Pilha(p,tam);

    // Enpilhar:
    for(int i = 0; i < tam; i++){
        cout<<"<< DIGITE UM VALOR:"<<endl;
        cin>>valor;
        Enpilhar(p,valor);
    }

    // Desenpilhar:
    aux = Desenpilhar(p);
    cout<<"Elemento Removido: "<<aux<<endl;


}