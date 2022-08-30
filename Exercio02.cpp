/* Crie um programa que ordene um vetor dinamicamente: */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int tamVet;
    int *vetor, aux;
    int i,j;

    // Função para determinar o valor dinamico do vetor:
    vetor = (int*) malloc(tamVet * sizeof(int));

    // Função para definir o tamanho do Vetor:
    cout<<"Informe um tamanho para o Vetor: "<<endl;
    cin>>tamVet;
    cout<<endl;

    // Função para incrementar o vetor:
    for(i =0; i< tamVet; i++){
        cout<<"Imforme o "<<i+1<<" valor: "<<endl;
        cin>>vetor[i];
    }

    // Função para ordenar o vetor Utilizando o Bubble Sort:
    for(i=0; i < tamVet; i++){
        for(j=i+1; j < tamVet; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    // Função para exibir o resultado da Ordenação:
    cout<<"Vetor Ordenado: "<<endl;
    for(i = 0;i < tamVet; i++){
        cout<<vetor[i]<<endl;
    }
}