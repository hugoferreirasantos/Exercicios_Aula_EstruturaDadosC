#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Aluno{
    string nome;
    string matricula;
    string disciplina;
    int idade;
    
    
    

    
   // M�todo para inserir valores na struct:
   void InserirValores(string strnome, string strmatricula,string strdisc,int stridade){
   	nome = strnome;
   	matricula = strmatricula;
   	disciplina = strdisc;
   	idade = stridade;
   } 
   
   // M�todo para alterar os dados do aluno:
   void AlterarDados(string altNome, string altMatricula, string altDisciplina, int altIdade){
   	nome = altNome;
   	matricula = altMatricula;
   	disciplina = altDisciplina;
   	idade = altIdade;
   }
   
   // M�todo para Mostrar os valores da struct:
   void Mostrar(){
   	cout<<endl;
   	cout<<"DADOS DO ALUNO:"<<endl;
   	cout<<endl;
   	cout<<"O NOME DO ALUNO: "<<nome<<endl;
   	cout<<"A MATRICULA DO ALUNO: "<<matricula<<endl;
   	cout<<"A DISCIPLINA MATRICULADA: "<<disciplina<<endl;
   	cout<<"A IDADE DO ALUNO: "<<idade<<endl;
   }
    
};

int main(){
	
	// Declarar as vari�veis:
	string nome;
	string matricula;
	string disciplina;
	int idade;
	
	int opcao;
    int qtAluno;
    int posicao;
	
	// Pedir ao usu�rio um tamanho para o vetor:
	int tamVet;
	cout<<"DIGITE UM TAMANHO PARA O VETOR: "<<endl;
	cin>>tamVet;
	
	Aluno *alunos = new Aluno[tamVet]; 
	
	struct Aluno aluno1,aluno2,aluno3,aluno4,aluno5;
	
	// La�o for para incrementar o vetor:
	for(int i = 0; i < tamVet; i++){
		cout<<endl;
		cout<<"INFORME O NOME DO ALUNO: "<<endl;
		cin>>nome;
		cout<<"INFORME A MATRICULA DO ALUNO: "<<endl;
		cin>>matricula;
		cout<<"INFORME A DISCIPLINA DO ALUNO:"<<endl;
		cin>>disciplina;
		cout<<"INFORME A IDADE DO ALUNO: "<<endl;
		cin>>idade;
		alunos[i].InserirValores(nome,matricula,disciplina,idade);
		
	}
	
	// La�o for para mostrar o resultado da incrementa��o dentro do vetor:
	for(int i = 0; i < tamVet; i++){
		alunos[i].Mostrar();
	}
	
	// Caso o usu�rio queira alterar os dados dos aluno:
	cout<<endl;
	cout<<"DESEJA ALTERAR ALGUN DADO DE UM ALUNO ?"<<endl;
	cout<<"DIGITE 1: "<<endl;
	cin>>opcao;
	
	if(opcao == 1){
		cout<<endl;
		cout<<"INFORME A QUANTIDADE DE ALUNOS QUE DESEJA ALTERAR DADOS:"<<endl;
		cin>>qtAluno;
		
		//La�o for para incrementar a altera��o de dados:
		for(int i = 0; i < qtAluno ; i++){
			cout<<endl;
			cout<<"INFORME A POSICAO DO ALUNO NO VETOR: "<<endl;
			cin>>posicao;
			cout<<"INFORME O NOME DO ALUNO: "<<endl;
			cin>>nome;
			cout<<"INFORME A MATRICULA DO ALUNO: "<<endl;
			cin>>matricula;
			cout<<"INFORME A DISCIPLINA DO ALUNO: "<<endl;
			cin>>disciplina;
			cout<<"INFORME A IDADE DO ALUNO: "<<endl;
			cin>>idade;
			alunos[posicao].AlterarDados(nome,matricula,disciplina,idade);
		}
	}
	
	// Exibir o resultado da altera�ao:
	for(int i = 0; i < tamVet; i++){
		alunos[i].Mostrar();
	}
	
	
}












