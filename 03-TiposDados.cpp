/*
O tipo de uma variável deve ser conhecido em tempo de compilação e esse tipo não 
pode ser alterado sem recompilar o programa. Isso significa que uma variável inteira
pode conter apenas valores inteiros.

O C++ também permite que você crie seus próprios tipos definidos pelo usuário.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos as variáveis
    int x;
    double y;
    int resultado_int;
    double resultado_double;

    // Inicializamos as variáveis
    x = 2;
    y = 3.1;

    // Operação
    resultado_int = x + y;
    resultado_double = x + y;

    // Imprime o resultado
    cout << "Resultado da soma de inteiros: " << resultado_int << endl;
    cout << "Resultado da soma de decimais: " << resultado_double << endl;

}