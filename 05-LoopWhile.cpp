/*
O loop while é o mais simples dos três tipos de loops fornecidos pelo C++.

Tem uma definição muito semelhante à de uma instrução if:

while (condição)
    statement;

O código abaixo imprimi essa sequência:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>

int main()
{
    int cont_externo = 1;

    while (cont_externo <= 5)
    {
        int cont_interno = 1;

        while (cont_interno <= cont_externo)
        {
            std::cout << cont_interno << " ";
            ++cont_interno;
        }
        
        std::cout << "\n";
        ++cont_externo;
    }

}
