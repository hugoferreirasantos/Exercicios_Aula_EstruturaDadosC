#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Carro{
    // Atributos:
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    // Métodos:
    //Atribuir valores a struct:
    void inseri(string strnome, string strcor, int strpot, int strvelMax){
        nome = strnome;
        cor = strcor;
        pot = strpot;
        velMax = strvelMax;
        vel =0;
    }


    // Mostrar os valores:
    void mostrar(){
        cout<<"NOME................: "<<nome<<endl;
        cout<<"COR.................: "<<cor<<endl;
        cout<<"POTENCIA............: "<<pot<<endl;
        cout<<"VELOCIDADE ATUAL....: " <<vel<<endl;
        cout<<"VELOCIDADE MAXIMA...: "<<velMax<<endl;
    }

    // Função para mudar a velocidade:
    void mudaVel(int mv){
         vel = mv;
        
        if(vel > velMax){
            vel = velMax;
        }if(vel < 0){
            vel = 0;
        }
    }

};

int main(){
    Carro *carros = new Carro[5];


    // Declarando a struct no MAIN:
    struct Carro car1,car2,car3,car4,car5;

    // Inserindo nas posições do vetor:
    carros[0].inseri("Tornado","Vermelho",450,350);
    carros[1].inseri("Luxo","Preto",250,260);
    carros[2].inseri("Familia","Prata",150,180);
    carros[3].inseri("Trabalho","Branco",80,120);
    carros[4].inseri("Carro Padrao","Cinza",100,150);

    // Funçao for para exibir os resultados:
    for(int i = 0; i < 5; i++){
        carros[i].mostrar();
    }    

    

}