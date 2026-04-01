#include<iostream>
#include<string>

int main(){
    
    std::string nome;
    int idade;
    int anosAtual = 2026;
   

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual Sua idade "<<std::endl;
    std::cin>>idade;

    std::cout<<"Bem-vindo(a) "<<nome<<std::endl;
    std::cout<<"Voce nasceu em "<<anosAtual-idade<<std::endl;

        
    

    return 0;
}