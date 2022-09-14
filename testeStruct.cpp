#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct aluno{
    string nome;
    float nota;
    int idade;
};

int main(){
    struct aluno obj,obj2;

    obj.nome = "Pedro";
    obj.nota = 3.5;
    obj.idade = 32;
    
    obj2.nome = "Marcos";
    obj2.nota = 9.5;
    obj2.idade = 17;
    // Retornando  os valores de obj:
    cout<<obj.nome<<endl;
    cout<<obj.nota<<endl;
    cout<<obj.idade<<endl;
    cout<<endl;

    // Retornando os valores do obj2:
    cout<<obj2.nome<<endl;
    cout<<obj2.nota<<endl;
    cout<<obj2.idade<<endl;

}
