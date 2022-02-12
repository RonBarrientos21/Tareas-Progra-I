#include <iostream>

int main ()
{
    int N1;
    int N2;


//SUMA
    std::cout << "Escriba un numero para sumar: ";
    std::cin >> N1;
    std::cout << "Escriba otro numero para sumar: ";
    std::cin >> N2;
    std::cout << "Su suma es " << N1+N2 << std::endl;
//RESTA
    std::cout << "Escriba un numero para restar: ";
    std::cin >> N1;
    std::cout << "Escriba otro numero para restar: ";
    std::cin >> N2;
    std::cout << "Su resta es " << N1-N2 << std::endl;
//MULTIPLICATION
    std::cout << "Escriba un numero para multiplicar: ";
    std::cin >> N1;
    std::cout << "Escriba otro numero para multiplicar: ";
    std::cin >> N2;
    std::cout << "Su multiplicacion es " << N1*N2 << std::endl;
//DIVISION
    std::cout << "Escriba un numero para Dividir: ";
    std::cin >> N1;
    std::cout << "Escriba otro numero para Dividir: ";
    std::cin >> N2;
    std::cout << "Su Division es " << N1/N2 << std::endl;

    return 0;
}

