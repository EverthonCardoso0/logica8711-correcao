#include<iostream>
#include<string>
#include<windows.h>
#include<thread> //para lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo <ms, segundo)

int main(){

    int tabuada = 7;

    for(int i = 0; i <= 10; i++){
        std::cout<<"O resultado de "<<tabuada<<" x "<<i<<" = "<<tabuada * i<<std::endl;
    }

    
    return 0;
}