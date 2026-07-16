#include<Windows.h> 
#include <iostream> 
 
int main(){ 

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    std::cout<<"Numeros pares existem de 1 a 100"<<std::endl;

  int contador = 0;
    for(int i = 1; i <= 100; i++){
      if  (i % 2 == 0){
        contador++;
      }
    }
    std::cout<<"Quantidade de números pares: "<<contador<<std::endl;
    
    return 0;

}


    



 