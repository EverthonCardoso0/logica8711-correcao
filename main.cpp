#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Everthon";

    std::cout<<nome[0]<<std::endl;
    std::cout<<nome[2]<<std::endl;
    std::cout<<nome[nome.length() - 1]<<std::endl;
    nome [0] = 'A';
    std::cout<<nome<<std::endl;
    
    return 0;
}