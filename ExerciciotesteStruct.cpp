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
    // Declarando a struct no MAIN:
    struct Carro car1,car2;

    car1.inseri("Tornado","Vermelho",450,300);
    car2.inseri("Luxo","Preto",250,260);
    
    
    car1.mostrar();
    car1.mudaVel(150);
    cout<<endl;
    car1.mostrar();
    cout<<endl;
    

    

}