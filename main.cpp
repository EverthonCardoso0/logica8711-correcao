#include<iostream>
#include<Windows.h>
#include<vector>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numero;

    std::cout<<"Inverter o vector: "<<std::endl;

  numero.push_back(10);
  numero.push_back(20);
  numero.push_back(30);
  numero.push_back(40);
  numero.push_back(50);

  std::cout<<"Original: ";
  for(int i = 0; i < numero.size(); i++){
    std::cout<<numero[i]<<" ";
  }
  std::cout<<std::endl;
  std::cout<<"Invertido: ";
  for(int i = numero.size() -1; i >= 0; i--){
    std::cout<<numero[i]<<" ";
  }
  std::cout<<std::endl;

  
  
return 0;
}
