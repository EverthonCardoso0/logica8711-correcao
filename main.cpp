#include<iostream>

int main(){

    int idade = 24;

    std::string resultado = (idade >= 18) ? "Maior de idade!" : "Menor de idade!";

    std::cout<<resultado<<std::endl;
}