
#include<Windows.h>
#include <iostream>

using namespace std;

int main(){

  SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    for(int i = 1; i <= 20; i+=2){
        std::cout<<i<<" "<<std::endl;
      }
    
    
    return 0;
}