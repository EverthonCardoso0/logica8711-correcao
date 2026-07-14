#include<iostream>
#include<Windows.h>
#include<cmath>

int calcularCubo(int num){
  return static_cast<int>(std::pow(num, 3));
}
  


int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

int num;

std::cout<<"Digite um número inteiro: ";
std::cin>>num;

int cubo = calcularCubo(num);
std::cout<<"O resultado é: "<<cubo<<"."<<std::endl;

  
return 0;
    
}


  
  

