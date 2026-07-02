#include <iostream>

int main() {

    int numeros[5];
    int soma = 0;

    std::cout << "==== 5. Calcular media ====" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }

    std::cout << "A media e " << soma << "." << std::endl;

    return 0;
}