#include<Windows.h> 
#include <iostream> 
 
int main(){ 

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    int soma = 0;

    for(int i = 1; i <= 100; i++){
      soma += i;
    
    }
    
    std::cout<<"A Soma numero 1 a 100 é: "<<soma<<std::endl;
  
    return 0;
}

 