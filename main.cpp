#include<iostream> 

void verificarAprovado(float nota){
     if(nota >= 7){
          std::cout<<"Status: Aprovado!"<<std::endl;
     }else{
          std::cout<<"Status: Reprovado!"<<std::endl;
     }
}
    int main(){

     float minhanota = 8.5;

     verificarAprovado(minhanota);
           
        return 0;
}