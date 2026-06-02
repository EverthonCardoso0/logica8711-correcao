#include<iostream>
#include<string>

int main(){

    int numero = 42;
    int* ptr = &numero;

    std::cout<<"Acessar via variável: "<<numero<<std::endl;
    std::cout<<"Acessar via ponteiro: "<<*ptr<<std::endl;
           
    return 0;

}




     
     
