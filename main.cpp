#include<iostream>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador -1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;

}

int main(){
    
    int num;
    int multiplicador;

    std::cout<<"Digite o número: "<<std::endl;
    std::cin>>num;

    std::cout<<"Digite o multiplicador: "<<std::endl;
    std::cin>>multiplicador;

    tabuada(num, multiplicador);

}
      
     
     
