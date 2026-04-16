#include<iostream>
#include<string>
#include<windows.h>
#include<thread> //para lidar com o tempo de execução
#include<chrono> //para definir unidades de tempo <ms, segundo)

int main(){

     int myNumers[5] = {10, 20, 30, 40, 50};
    // for(int num : myNumers){
        //  std::cout<<num<<std::endl;
        // }
    for(int i = 0; i < 5; ++i){
        std::cout<<myNumers[i]<<std::endl;
    }
    
    return 0;
}