#include<iostream> 
#include<string>
#include<iomanip>

void exibirModalidade(){
        std::cout<<"========== SENAC NH - MATRICULAS =========="<<std::endl;
        std::cout<<"1 - Cursos presenciais"<<std::endl;
        std::cout<<"2 - Cursos EAD"<<std::endl;
        std::cout<<"3 - Idiomas (Libras)"<<std::endl;
        std::cout<<"0 - Sair do Sistema"<<std::endl;
        std::cout<<"Selecione a modalidade do curso: "<<std::endl;

}


int main(){
 
     int modalidade = -1;
     exibirModalidade();
     modalidade;
     std::string nomeCompleto, CPF, enderenco, EMAIL;
     int anosNascimento;
     int anosAtual = 2026;

     

     std::cout<<"Digite o nome completo do aluno: "<<std::endl;
     std::getline(std::cin, nomeCompleto);

     std::cout<<"Digite o seu CPF: "<<std::endl;
     std::cin>>CPF;

     std::cout<<"Digite o seu Ano de Nascimento: "<<std::endl;
     std::cin>>anosNascimento;

     std::cout<<"Digite o seu Enderenço: "<<std::endl;
     std::getline(std::cin, enderenco);

     std::cout<<"Digite o seu número telefone: "<<std::endl;


     std::cout<<"Nome do Aluno: "<<nomeCompleto<<std::endl;
     std::cout<<"CPF: "<<CPF<<std::endl;
     std::cout<<"Idade: "<<anosAtual-anosNascimento<<std::endl;   
     std::cout<<"Enderenço: "<<enderenco<<std::endl;
     
     
        
         return 0;
}