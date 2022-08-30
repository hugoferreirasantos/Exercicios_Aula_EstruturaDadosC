#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void PedirValores();
void ExibirValores();

int *vetor, tamVet, aux;

// Função para pedir valores:


int main(){
    // Chamar a função PedirValores:
    PedirValores();
    
    // Chamar a função ExibirValores:
    ExibirValores();
    
    

    delete[] vetor;
}




void PedirValores(){

    cout<<"INSIRA O TAMANHO PARA O VETOR: "<<endl;
    cin>>tamVet;

    vetor = (int*) malloc(tamVet*sizeof(int));

    cout<<endl;
    for(int i = 0; i < tamVet; i++){
        cout<<"Insira o "<<i+1<<" valor: "<<endl;
        cin>>vetor[i];
        
    }
    
}



void ExibirValores(){
    cout<<endl;
    cout<<"VALORES DO VETOR:"<<endl;
   for(int i = 0; i < tamVet; i++){
        cout<<vetor[i]<<endl;
    }
}


