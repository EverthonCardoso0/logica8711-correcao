#include<iostream>
#include<string>
#include<algorithm>

bool ehPalindromo(std:: string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while(inicio < fim){
        if(s[inicio] != s[fim]){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main(){

    std::string palavra;

    std::cout<<"Digite um palavra: "<<std::endl;
    std::cin>>palavra;

    for(int i = 0; i< palavra.length(); i++){
        palavra[i] = std::tolower(palavra[i]);
    }

    if(ehPalindromo(palavra)){
        std::cout<<"É Palindromo!"<<std::endl;
    }else{
        std::cout<<"Não é Palindromo!"<<std::endl;
    }
    return 0;
}




     
     
