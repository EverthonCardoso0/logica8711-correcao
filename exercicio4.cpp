#include<iostream>

int main(){

    int numeros[5];
    int media = 0;

    std::cout<<"==== 3. Encontrar media ===="<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o numero "<<(i + 1)<<": ";
        std::cin>>numeros[i];
    }
    media = numeros[0];
    for(int i = 0; i < 5; i++){
        if(numeros[i] >= media){
            media = numeros[i];
        }
    }

    std::cout<<"O media é "<<media<<"."<<std::endl;

    return 0;
}