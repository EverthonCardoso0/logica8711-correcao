#include<Windows.h> 
#include <iostream> 
 
int main(){ 

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    int num;

    std::cout<<" Digite um numero: "<<std::endl;
    std::cin>>num;

    std::cout<<"Tabuada do "<<num<<" : "<<std::endl;

    for(int i = 1; i <= 10; i++){
      std::cout<<num<<" x "<< i << " = "<<num * i<<std::endl;
    }
    
    return 0;

}

 