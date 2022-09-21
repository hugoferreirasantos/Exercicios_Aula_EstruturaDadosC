// Criar uma Pilha denamicamente:
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define TAMAX 100

// Criar uma struct do tipo Pilha:
struct Pilha{
    int Item[TAMAX];
    int topo;

    
};

// Função para iniciar a pilha:
void Iniciar_Pilha(Pilha *p){
    p->topo = -1;
}

// Verificar se a pilha está vazia:
int Verifica_Vazia(Pilha *p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

// Verificar se a pilha está cheia:
int Verifica_Cheia(Pilha *p){
    if(p->topo == TAMAX - 1){
        return 1;
    }else{
        return 0;
    }
}

//Inserir elementos na pilha:
void Inseri_Pilha(Pilha *p, int x){
    if(Verifica_Cheia(p) == 1){
        printf("\n ERROR: Pilha Cheia: ");
    }else{
        p->topo++;
        p->Item[p->topo] = x;
    }
}

// Remover um elemento da pilha:
int Remover_Pilha(Pilha *p){
    int aux;
    if(Verifica_Vazia(p) == -1){
        printf("\n Pilha Vazia: ");
    }else{
        aux = p->Item[p->topo];
        p->topo--;
        return aux;

    }
}

int main(){
    // Declarar Pilha:
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    // Incializar a pilha:
    Iniciar_Pilha(p);

    //Inserir valores na pilha:
    bool flag = true;
    int opicao;
    while(flag){
        int valores;
        cout<<"Insira um valor: "<<endl;
        cin>>valores;
        Inseri_Pilha(p,valores);

        cout<<"Desej para de inseir valores ? Sim 0 ou Não -1"<<endl;
        cin>>opicao;
        if(opicao == 0){
            flag = true;
        }else{
            flag = false;
        }

    }

    // Retirar valores de uma pilha:
    int aux;
    aux = Remover_Pilha(p);
    cout<<"\n Saiu : "<<aux;

    
    
    



    return 0;

}
