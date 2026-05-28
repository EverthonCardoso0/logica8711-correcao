#include<iostream>
void contar(int numero){
        if(numero == 3){
            std::cout<<"PARE!!\n";
            return;
        
    }
    std::cout<<numero<<"\n";
    
    contar(numero - 1);
}
int main(){

    contar(5);
}

      
     
     
