/* Crie um programa que leia os valres para o vetor W (alocado dinamicamente), calcule o fatorial desses
valores e guarde em outro vetor Z */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


void PedirValores();

int *vetorW, tamVetW;
int *vetorZ, tamVetZ;

int calFatorial(int n){
    int f;
    f = 1;
    while(n >= 1){
        f = f * n;
        n--;
    }

    return(f);
}


int main(){

    PedirValores();

    cout<<"VALORES INSERIDOS NO VETOR W:"<<endl;
    for(int i = 0; i < tamVetW; i ++){
        cout<<vetorW[i]<<endl;
    }

    
    cout<<"RESULTADO DO CALCULO FATORIAL DOS VALORES DO VEOTR W: "<<endl;
   for(int i = 0; i < tamVetZ; i++){
    cout<<vetorZ[i]<<endl;
   }
	
	delete[] vetorW;
	delete[] vetorZ;
}

void PedirValores(){
    // Função para inserir um valor dinamico para o tamanho do vetor:
    vetorW = (int*) malloc(tamVetW * sizeof(int));
    vetorZ = (int*) malloc(tamVetZ * sizeof(int));
    
    // Função para o usuário definir o tamanho do vetorW:
    cout<<"INFORME UM TAMANHO PARA O VETOR W: "<<endl;
    cin>>tamVetW;

    cout<<"INFORME UM TAMANHO PARA O VETOR Z: "<<endl;
    cin>>tamVetZ;

    for(int i = 0; i < tamVetW; i++){
        cout<<"Informe um numero o "<<i+1<<" do vetor W: "<<endl;
        cin>>vetorW[i];
        vetorZ[i] = calFatorial(vetorW[i]);
    }

}

