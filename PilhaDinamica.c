// Criar uma pilha dinâmica:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int dado;
    struct No *prox;
}No;

typedef struct{
    No *topo;
}Pilha;

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

        Empilhar(10, p1);
        Empilhar(20,p1);
        Empilhar(30,p1);

        ImprimePilha(p1);

        printf("Tentando desempilhar - Resultado: ", desempilha(p1));
        printf("Tentando desempilhar - Resultado: ", desempilha(p1));
        printf("Tentando desempilhar - Resultado: ", desempilha(p1));
    }
}

