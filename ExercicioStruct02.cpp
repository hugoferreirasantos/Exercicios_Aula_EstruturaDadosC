/*Crie um programa que tenha uma estrutura contado, leia e armazene os dados de 6 contatos*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

struct Contato{
    string nome;
    int ddd;
    string numero;
    

    // Função para atribuir valores nos atributos:
    void inserir(string strnome, int strddd,string strnumero){
        nome = strnome;
        ddd = strddd;
        numero = strnumero;
    }

    // Função para exibir valores atribuidos:
    void mostrar(){
        cout<<"CONTATO"<<endl;
        cout<<"NOME...................: "<<nome<<endl;
        cout<<"DDD....................: "<<ddd<<endl;
        cout<<"NUMERO.................: "<<numero<<endl;
        cout<<endl;
    }
};


// Função principal main:
int main(){
    string nome;
    int ddd;
    string numero;

    int tamVet;
    cout<<"INFORME TAMANHO PARA O VETOR: "<<endl;
    cin>>tamVet;

    // Declarando um Vetor:
    Contato *contatos = new Contato[tamVet];

    // Declarando os tipos de estruturas:
    struct Contato cont1,cont2,cont3,cont4,cont5,cont6;

    // Função para Incrementar o Vetor:
    for(int i = 0; i < tamVet; i++){
        cout<<"DIGITE UM NOME: "<<endl;
        cin>>nome;
        cout<<"DIGITE O DDD: "<<endl;
        cin>>ddd;
        cout<<"DIGITE O NUMERO: "<<endl;
        cin>>numero;
        cout<<endl;
        contatos[i].inserir(nome,ddd,numero);
    }

    // Função para mostrar o resultado da incrementação:
    for(int i = 0; i < tamVet; i++){
        contatos[i].mostrar();
    }

}