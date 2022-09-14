/* Faça um programa que gerencie o estoque de um mercado (inserindo, alterando, consultando). 
Fazer usando estrutura de forma dinâmica:*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;





// Variáveis para o usuário inserir valores:
string nome;
string cod;
string marca;
float preco;



// Struct Produtos:

struct Produto{
    string nome;
    string cod;
    string marca;
    float preco;

    // Método para inserir dados em uma estrutura:
    void inserir(string strnome, string strcod, string strmarca, float strpreco){
        nome = strnome;
        cod = strcod;
        marca = strmarca;
        preco = strpreco;
    }

    // Método para alterar dados de uma estrutura:
    void alterar(string altnome, string altcod, string altmarca, float altpreco){
        nome = altnome;
        cod = altcod;
        marca = altmarca;
        preco = altpreco;
    }


    

    // Método para mostrar a struct:
    void mostrar(){
        cout<<endl;
        cout<<"NOME DO PRODUTO.............: "<<nome<<endl;
        cout<<"CODIGO DO PRODUTO...........: "<<cod<<endl;
        cout<<"MARCA DO PRODUTO............: "<<marca<<endl;
        cout<<"PRECO DO PRODUTO............: "<<preco<<endl;

    }



};



int main(){


    // Variavel para definir o tamanho do vetor:
    int tamVet;
    cout<<"INSIRA UM TAMANHO PARA O VETOR DE PRODUTOS: "<<endl;
    cin>>tamVet;

    // Pedindo ao sistema um alocação de memória dinâmica:
    Produto *produtos = new Produto[tamVet];

    struct Produto produto1,produto2,produto3,produto4;

    // Laço for para incrementar o vetor:
    for(int i = 0; i < tamVet; i++){
        cout<<endl;
        cout<<"INFORME O NOME DO PRODUTO: "<<endl;
        cin>>nome;
        cout<<"INFORME O CODIGO DO PRODUTO: "<<endl;
        cin>>cod;
        cout<<"INFORME A MARCA DO PRODUTO: "<<endl;
        cin>>marca;
        cout<<"INFORME O PRECO DO PRODUTO: "<<endl;
        cin>>preco;
        cout<<endl;
        produtos[i].inserir(nome,cod,marca,preco);
    }

    // variáveis referente opção escolha:
    string opcao;
    int qtprodutos;
    int posicao;
    

    // Opção de escolhas:
    cout<<"ESCOLHA UM DAS OPCAOES: "<<endl;
    cout<<"1 - ALTERAR UM PRODUTO DENTRO DO VETOR: "<<endl;
    cout<<"2 - EXCLUIR UM PRODUTO DENTRO DO VETOR: "<<endl;
    cin>>opcao;


    // Estrutura condicional referente as opções:
    if(opcao == "1"){
        cout<<"INFORME A QUANTIDADE DE PRODUTOS QUE DESEJA ALTERAR: "<<endl;
        cin>>qtprodutos;

        for(int i = 0; i < qtprodutos; i++){
            cout<<"INFORME A POSICAO QUE DESEJA ALTERAR: "<<endl;
            cin>>posicao;
            cout<<endl;
            cout<<"INFORME O NOME DO PRODUTO:"<<endl;
            cin>>nome;
            cout<<"INFORME O CODIGO DO PRODUTO: "<<endl;
            cin>>cod;
            cout<<"INFORME A MARCA DO PRODUTO: "<<endl;
            cin>>marca;
            cout<<"INFORME O PRECO DO PRODUTO: "<<endl;
            cin>>preco;
            produtos[posicao].alterar(nome,cod,marca,preco);
        }


    } if (opcao == "2"){
        cout<<"INFORME A QUANTIDADE DE PRODUTOS QUE DESEJA EXCLUIR: "<<endl;
        cin>>qtprodutos;

        for(int i = 0; i < qtprodutos; i++){
            cout<<"INFORME A POSICAO DO PRODUTO NO VETOR: "<<endl;
            cin>>posicao;
            produtos[posicao].nome = "NULL";
            produtos[posicao].cod = "NULL";
            produtos[posicao].marca = "NULL";
            produtos[posicao].preco = NULL;
        }


    }


    // Laço for para exibir o resultado:
    for(int i = 0; i < tamVet; i++){
        produtos[i].mostrar();
    }




    



}

