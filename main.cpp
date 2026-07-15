#include<Windows.h> 
#include <iostream> 
 
int main(){ 

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    std::cout<<"Numeros pares existem de 1 a 100"<<std::endl;

    for(int i = 2; i <= 100; i+=2){
      std::cout<<i<<std::endl;
    }
    
    return 0;

}

 