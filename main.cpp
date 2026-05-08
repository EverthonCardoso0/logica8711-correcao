#include<iostream> 
#include<string>
#include<iomanip>
using namespace std;


int main(){
   
     int opcao;

     do{

     cout<<"=========================================="<<std::endl;
     cout<<"Bem-Vindo a Senac NH"<<std::endl;
     cout<<"1 - Cadastro do Aluno "<<std::endl;
     cout<<"2 - Curso "<<std::endl;
     cout<<"3 - Sair Sistema "<<std::endl;
    
     std::cin >> opcao;

     switch(opcao){

        case 1:
        std::cout<<"você escolheu Cadastro do aluno"<<std::endl;
        return 0;                

        case 2:
        std::cout<<"você escolheu Curso"<<std::endl;
        return 1;

        case 3:
        std::cout<<"Obrigado,Volte sempre"<<std::endl;
        return 2;

        default:
        std::cout<<"Número Inválido"<<std::endl;
     } 
     }while (true);
         return 0;
}

//int Aluno(){
        
        //cout<<"=========================================="<<std::endl;
        //cout<<"Menu Principal"<<std::endl;
        







//}

        

      
     
     
        