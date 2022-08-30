/*Crie um programa que leia dois vetores inteiros(dinamicamente)e realize as operações de intersecção e união.
 Os resultados devem ser armazenados em vetores separados. */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int *conjA, tamConjA,*conjB, tamConjB, *Uniao, tamU, *Inter, tamI, *ConjAux, tamAUX;

void PedirValores();



int main(){
    
    PedirValores();
    


    // Função de União:
    for(int i = 0; i < tamU ;i++){
        for(int j = i +1; j < tamU; j++){
            if(Uniao[i] == Uniao[j]){
                Uniao[j] = 0;
            }
        }
    }

    

    // Exibição da operação da de União:
    cout<<"VETOR DA UNIAO: "<<endl;
    for(int i = 0; i < tamU ; i++){
        if(Uniao[i] != 0){
            cout<<Uniao[i]<<endl;
        }
    }


    // Função Intersecção:
    for(int i = 0;i<tamAUX;i++){
        for(int j = i+1; j<tamAUX;j++){
            if(ConjAux[i] == ConjAux[j]){
                Inter[i] = ConjAux[i];
            }
        }
    }

    // Exibição da Operação de Intersecção:

    cout<<"VETOR DA INTERCSECAO: "<<endl;
    for(int i = 0; i < tamAUX; i++){
        if(Inter[i] != 0){
            cout<<Inter[i]<<endl;
        }
    }

    

}

void PedirValores(){
    // Pedir ao usuario insira o tamaho dos vetores:
    cout<<"Insira um tamaho para o Vetor ConjA: "<<endl;
    cin>>tamConjA;

    cout<<"Insira um tamaho para o Vetor ConjB: "<<endl;
    cin>>tamConjB;

    cout<<"Insira um tamaho para Vetor Uniao : "<<endl;
    cin>>tamU;

    cout<<"Insira um tamaho para Vetor Inter: "<<endl;
    cin>>tamI;

    cout<<"Insira um tamaho para Vetor ConjAux: "<<endl;
    cin>>tamAUX;

    // Definir o tamaho dinâmico dos tamanhos dos vetores:
    conjA = (int*) malloc(tamConjA * sizeof(int));
    conjB = (int*) malloc(tamConjB * sizeof(int));
    Uniao = (int*) malloc(tamU * sizeof(int));
    Inter = (int*) malloc(tamI * sizeof(int));
    ConjAux = (int*) malloc(tamAUX * sizeof(int));

    // Função para incrementar o Vetor A;
    for(int i = 0; i< tamConjA; i++){
        cout<<"Informe o "<<i+1<<" Valor do Conjunto A: "<<endl;
        cin>>conjA[i];
        cout<<endl;
        Uniao[i] = conjA[i];
        ConjAux[i] = conjA[i];

    }

    // Função para incrementar o Vetor B
    for(int i = 0; i < tamConjB; i++){
        cout<<"Informe o "<<i+1<<" Valor do Conjunto B: "<<endl;
        cin>>conjB[i];
        cout<<endl;
        Uniao[i + tamConjB] = conjB[i];
        ConjAux[i + tamConjB] = conjB[i];
    }
}