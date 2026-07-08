#include<iostream>
#include<Windows.h>
#include<vector>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numero;

  numero.push_back(5);
  numero.push_back(10);
  numero.push_back(15);
  numero.push_back(20);
  numero.push_back(25);

  std::cout<<"Vector: ";
  for(int i = 0; i < numero.size(); i++){
    std::cout<<numero[i]<<" ";
  }
    std::cout<<" É Par ou Impar: "<<std::endl;

    for(int i = 0; i < numero.size(); i++){
        if(numero[i] % 2 == 0){
            std::cout<<numero[i]<<" É Par!"<<std::endl;
        }else{
            std::cout<<numero[i]<<" É Impar!"<<std::endl;
        }
    }

  
return 0;
}
