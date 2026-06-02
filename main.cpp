#include<iostream>
#include<string>

bool ehPalindromo(std:: string s, int inicio, int fim){
    if(inicio >= fim){
        return true;
    }
    if(s[inicio] != s[fim]){
        return false;
    }
    return ehPalindromo(s, inicio + 1, fim -1);
}

int main(){


    std::string palavra;

    std::cout<<"Digite um palavra: "<<std::endl;
    std::cin>>palavra;

    for(char &c : palavra){
        c = std::tolower(c);
    }
    
    if(ehPalindromo(palavra, 0, palavra.length() - 1)){
        std::cout<<"É Palidromo!"<<std::endl;
    }else{
        std::cout<<"Não é Palindromo!"<<std::endl;
           
    return 0;

}




     
     
