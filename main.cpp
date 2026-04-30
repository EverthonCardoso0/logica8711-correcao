#include<iostream> 

int main(){

    //brlAmount: Valor em reais / exchageRate: Taxa de Câmbio / usdAmount: Valor em dolar
    double briAmount, exchangeRate, usdAmount;
    int choice; //choice: escolha

    std::cout<<"---- Currency Converter: BRL to USD -----"<<std::endl;

    //Entrada da taxa de câmbio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the current exchange rate(How much is 1 dollar in Reais?): "<<std::endl;
    std::cin>>exchangeRate;

    //Entrada da guantia em Reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>briAmount;

    //verificado lógica: garante que o valor informado seja positivo
    if(briAmount > 0){
          //calcula: divide o montante em reais pela taxa de câmbio
          usdAmount = briAmount / exchangeRate;
          std::cout<<"You will have $"<<usdAmount<<" U$ Dollars."<<std::endl;
    }else{
          //Mensagem de erro caso o valor seja zero ou negativo
          std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }

        return 0;
}