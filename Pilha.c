// Pilha estática:
#include <stdio.h>
#include <stdlib.h>

#define TAMAX 100

// Struct:
typedef struct{
    int Item[TAMAX];
    int topo;

} Pilha;

// Função para iniciar a pilha:
void Iniciar_Pilha(Pilha *p){
    p->topo = -1;
}

// Verificar se a pilha está vazia:
int Vericar_Vazia(Pilha *p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

// Verificar se a pilha está cheia:
int Pilha_Cheia(Pilha *p){
    if(p->topo == TAMAX -1){
        return 1;
    }else{
        return 0;
    }
}

// Inserir elementos na pilha:
void Pilha_Inseri(Pilha *p, int x){
    if(Pilha_Cheia(p) == 1){
        printf("ERROR: Pilha Chaia: ");
    }else{
        p->topo++;
        p->Item[p->topo] = x;
    }
}

// Função para retirar elementos na pilha:
int Pilha_Retira(Pilha *p){
    int aux;
    if(Vericar_Vazia(p) == 1){
        printf("ERROR: Pilha Vazia");
    }else{
        aux = p->Item[p->topo];
        p->topo--;
        return aux;
    }
}

// Função Principal:
int main(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    Iniciar_Pilha(p);

    // Passar Valores Fixos:
    Pilha_Inseri(p,1);
    Pilha_Inseri(p,2);
    Pilha_Inseri(p,3);

    // Removendo um Itens:
    int aux;
    aux = Pilha_Retira(p);
    printf("\n Saiu %d", aux);

    return 0;
}