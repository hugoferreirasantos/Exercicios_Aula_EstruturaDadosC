/*Crie um programa que tenha uma estrurtura aluno e armazene os dados de 5 alunos:*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    string matricula;
    int idade;
    string nacionalidade;
    string diciplina;

    // Função para inserir valores na struct:
    void inserir(string strnome, string strmatricula, int stridade,string strnacionalidade,string strdiciplina){
        nome = strnome;
        matricula = strmatricula;
        idade = stridade;
        nacionalidade = strnacionalidade;
        diciplina = strdiciplina;
    }

    // Função para mostrar o resultado da inserção:
    void mostrar(){
        cout<<"DADOS DOS ANULO:"<<endl;
        cout<<"\n \n";
        cout<<"NOME DO ALUNO.............: "<<nome<<endl;
        cout<<"MATRICULA.................: "<<matricula<<endl;
        cout<<"IDADE DO ALUNO............: "<<idade<<endl;
        cout<<"NACIONALIDADE DO ALUNO....: "<<nacionalidade<<endl;
        cout<<"DICIPLINA MATRICULADO.....: "<<diciplina<<endl;
    }
};

//Função principal:
int main(){
    // Variáveis locais da função MAIN:
    string nome;
    string matric;
    int idade;
    string nacio;
    string discs;



    // Declarando um tamanho para o vetor alunos:
    int tamVet;
    cout<<"INSIRA UM TAMANHO PARA O VETOR: "<<endl;
    cin>>tamVet;

    // Declara o vetor:
    Aluno *alunos = new Aluno[tamVet]; 


    //Declarar a struct:
    struct Aluno aluno1,aluno2,aluno3,aluno4,aluno5;
    
    

    // Incrementar o vetor alunos:
    for(int i = 0; i < tamVet; i++){
        cout<<"INFORME O NOME DO ALUNO: "<<endl;
        cin>>nome;
        cout<<"INFORME A MATRICULA DO ALUNO: "<<endl;
        cin>>matric;
        cout<<"INFORME A IDADE DO ALUNO: "<<endl;
        cin>>idade;
        cout<<"INFORME A NACIONALIDADE DO ALUNO: "<<endl;
        cin>>nacio;
        cout<<"INFORME A DISCIPLINA DO ALUNO: "<<endl;
        cin>>discs;
        alunos[i].inserir(nome,matric,idade,nacio,discs);
    }

    // Função para mostrar os resultados:
    for(int i = 0; i < tamVet; i++){
        cout<<endl;
        alunos[i].mostrar();
        cout<<endl;
    }


}