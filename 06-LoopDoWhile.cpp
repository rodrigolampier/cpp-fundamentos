/*
O loop while valida uma condição antes de executar alguma instrução.
Quando precisamos executar uma instrução e só depois fazer a validação
da condição, o loop Do-While é o loop ideal.

Definição:

do
    statement
while (condição);

*/

#include <iostream>
using namespace std;

int main()
{
    int seletor;

    do
    {
        cout << "\nPor favor escolha uma opção (de 1 a 4): \n";
        cout << "1 - Soma\n";
        cout << "2 - Subtração\n";
        cout << "3 - Multiplicação\n";
        cout << "4 - Divisão\n";
        cin >> seletor;

    // Continua a executar a instrução acima se o número digitado não for 1, 2, 3 ou 4
    } while (seletor != 1 && seletor != 2 && seletor != 3 && seletor != 4);

    cout << "A opção escolhida foi: " << seletor << endl;
    
}
