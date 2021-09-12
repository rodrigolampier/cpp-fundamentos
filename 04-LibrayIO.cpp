/*
A bibliotetca "iostream" é parte da biblioteca padrão C++ que lida com entrada e saída básicas. 
Usamos essa biblioteca para obter entrada do teclado e dados de saída para o console. 
Para usarmos as funcionalidades definidas na biblioteca iostream, precisamos incluir o 
cabeçalho iostream na parte superior do nosso código.

São 3 objetos principais do iostream:
cout - grava algo no terminal de saida
cin - lê alguma coisa do dispositivo de entrada
endl - completa uma linha e passa para a próxima
*/

#include <iostream>

int main()
{
    // É o mesmo que int x = 5
    int x(5);

    // imprime o valor de x (5) para o console
    std::cout << "\nValor da variável x: " << x << std::endl;

        // Solicita que o usuário digite um número
    std::cout << "\nDigite um número: ";

    int y;

    // obtém o número digitado no teclado e armazena-o na variável y
    std::cin >> y;

    // Mensagem de saída
    std::cout << "\nVocê digitou o número " << y << "\n\n";
}
