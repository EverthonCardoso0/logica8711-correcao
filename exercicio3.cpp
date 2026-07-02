#include<iostream>

int main(){

    int numeros[5];
    int maior = 0;

    std::cout<<"==== 3. Encontrar maior ===="<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero "<<(i + 1)<<": ";
        std::cin>>numeros[i];
    }
    maior = numeros[0];
    for(int i = 0; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    std::cout<<"O maior é "<<maior<<"."<<std::endl;

    return 0;
}