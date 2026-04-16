#include<iostream>
#include<string>
#include<windows.h>
#include<thread> //para lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo <ms, segundo)

int main(){

    int soma = 0;

    for(int i = 1; i <= 5; i++){
        soma = soma + i;        
    }                 
    
    std::cout<<"Soma é: "<<soma<<std::endl;
    
    return 0;
}