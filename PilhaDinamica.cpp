// Criar uma pilha dinâmica:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

struct No{
    int dado;
    struct No *prox;
};

struct Pilha{
    No *topo;
};

void Inicializar(Pilha *p){
    p->topo = NULL;
}

void Empilhar(int dado, Pilha *p){
    No *pont = (No*) malloc(sizeof(No));
    if(pont == NULL){
        printf("\n ERRO DE ALOCACAO DE NOVO NO \n");
        return;
    }else{
        pont->dado = dado;
        pont->prox = p->topo;
        p->topo = pont;
    }
}

int desempilha(Pilha *p){
    No *pont = p->topo;
    int dado;
    if(pont == NULL){
        printf("\n Pilha Vazia \n");
    }else{
        p->topo = pont;
        pont->prox = NULL;
        dado = pont->dado;
        free(pont);
        return dado;
    }

}

void ImprimePilha(Pilha *p){
    No *pont = p->topo;
    if(pont == NULL){
        printf("\n Pilha Vazia \n");
        return;
    }else{
        while(pont != NULL){
            printf("%d ", pont->dado);
            pont = pont->prox;
        }
        printf("\n");
    }
}

int main(){
    Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));
    if(p1 == NULL){
        printf("\n ERRO DE ALOCACAO NA PILHA: \n");
        exit(0);
    }else{
        Inicializar(p1);

        int tamPilha, valor;
        cout<<"Digite a quantidade de elementos: "<<endl;
        cin>>tamPilha;
        for(int i = 0 ; i < tamPilha; i++){
    		cout<<endl;
        	cout<<"Digite um valor: "<<endl;
        	cin>>valor;
        	Empilhar(valor,p1);
        	cout<<endl;
		}
        
        ImprimePilha(p1);
        
        cout<<"Desempilhado: "<<desempilha(p1)<<endl;
        cout<<"Desempilhado: "<<desempilha(p1)<<endl;
        cout<<"Desempilhado: "<<desempilha(p1)<<endl;
        
        ImprimePilha(p1);
        cout<<"Desempilhado: "<<desempilha(p1)<<endl;
        
        
    }
}

