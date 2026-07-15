#include<Windows.h> 

#include <iostream> 

 

using namespace std; 

 
int main(){ 

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    const float PI = 3.14; 
    float raio, area; 
 
    std::cout <<"Digite o raio do circulo: "<<std::endl; 
    std::cin>>raio; 
    area = PI * (raio * raio); 


 