#include<iostream>

struct CampeonatoCopa{
    int ano;
    std::string campeao;
};

int main(){
    CampeonatoCopa copa[5] = {
        {2022, "Argentina"},
        {2018, "França"},
        {2014, "Alemanha"},
        {2010, "Espanha"},
        {2006, "Itália"}
    };

    std::cout<<"==== Campeões da Copa ===="<<std::endl;
    std::cout<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<copa[i].ano<<" - Campeão: "<<copa[i].campeao<<std::endl;
        
    }
    return 0;
}

