#include<iostream>
#include<string>
#include<windows.h>

int main(){

std::string nome;
float altura;
int idade;

std::cout<<"Qual seu nome? "<<std::endl;
std::cin>>nome;
std::cout<<"Qual é sua altura? "<<std::endl;
std::cin>>altura;
std::cout<<"Quantos anos tu tem? "<<std::endl;
std::cin>>idade;

if(idade <= 10){
    std::cout<<"Bem-vindo, "<<nome<<" Você vai turma Infantil. "<<std::endl;
}else if(idade <= 18){
    std::cout<<"Bem-vindo, "<<nome<<" Você vai turma adolescente."<<std::endl;
}else if(idade <= 60){
    std::cout<<"Bem-vindo, "<<nome<<" Você vai turma Adulto. "<<std::endl;
}


    return 0;
}



//nome
//altura
//idade
//10 = infantil
//18 = adolescente
//60 = adulto