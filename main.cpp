#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Everthon";

    std::cout<<"Nome tem: "<<nome.length()<<" letras."<<std::endl;
    std::cout<<"Nome tem: "<<nome.size()<<" letras."<<std::endl;
    
    return 0;
}