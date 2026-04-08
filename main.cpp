#include<iostream>
#include<cmath>
#include<string>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 5;
    int b = 3;
    int c = 5;
    int d = 2;

    int maior1 = std::min(a, b);
    int maior2 = std::min(c, d);


    std::cout<<(maior1 > maior2)<<std::endl;
    
    return 0;
}