#include<iostream>
#include<string>

struct Tarefa{
    int CPF;
    std::string nome;
    bool concluida;
};

Tarefa tarefas[50];
int totalTarefas = 0;

void adicionar(){
    std::cout<<"\n --- Adicionar Castrado --- "<<std::endl;

    std::cin.ignore();
    std::cout<<"Nome Completo: ";
    std::getline(std::cin, tarefas[totalTarefas].nome);

    std::cout<<"CPF: ";
    std::cin>>tarefas[totalTarefas].CPF;

}

void listar(){
    if(totalTarefas == 0){
    std::cout<<"\nNenhuma tarefa!"<<std::endl;
    return;    
    }
    std::cout<<"\n --- Castrado --- "<<std::endl;
    for(int i = 0; i < totalTarefas; i++){
        std::string status = tarefas[i].concluida ? "S" : "N";
        std::cout<<"["<<status<<"]"<<tarefas[i].CPF<<" - "<<tarefas[i].nome<<std::endl;
    }
}

void marcarConcluida(){
    int cpfBuscado;
    std::cout<<"\nCPF da tarefas: ";
    std::cin>>cpfBuscado;
    
    for(int i = 0; i < totalTarefas; i++){
        if(tarefas[i].CPF == cpfBuscado){
            tarefas[i].concluida = true;
            std::cout<<"Marcada como concluida!"<<std::endl;
            return;
        }
    }
    std::cout<<"Tarefa não encontrada!"<<std::endl;
}


void menu(){
    std::cout<<"\n === Bem - Vindo a Lista ==="<<std::endl;
    std::cout<<"1. Cadastra"<<std::endl;
    std::cout<<"2. Listar"<<std::endl;
    std::cout<<"3. Marcar concluida"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
}

int main(){
    int opcao;

    while(true){
        menu();
        std::cin>>opcao;

        switch (opcao){ 
            
         case 1:
                adicionar();
                break;
         case 2:
                listar();
                break;
         case 3:
                marcarConcluida();
                break;
         case 4:
                std::cout<<"Até Mais!"<<std::endl;
                return 0;  
            default:
                std::cout<<"Opção inválida!"<<std::endl;
        
        }
     }
     return 0;
}