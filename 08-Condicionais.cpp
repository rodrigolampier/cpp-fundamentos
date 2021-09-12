/*
Uma instrução condicional especifica se alguma instrução associada deve ser executada ou não.

Definição:

if (condition)
    true_statement;
else
    false_statement;

*/

#include <iostream>
using namespace std;
 
int main()
{
    int seletor;
 
    do
    {
        cout << "\nPor favor escolha a operação: \n";
        cout << "1 - Soma\n";
        cout << "2 - Subtração\n";
        cout << "3 - Multiplicação\n";
        cout << "4 - Divisão\n";
        cin >> seletor;
    }
    while (seletor != 1 && seletor != 2 && seletor != 3 && seletor != 4);

    float num1;
    float num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    if (seletor == 1){
        cout << "A soma dos números é: " << num1 + num2 << "\n\n";
    }

    if (seletor == 2){
        cout << "A subtração do número 1 pelo número 2 é: " << num1 - num2 << "\n\n";
    }

    if (seletor == 3){
        cout << "A multiplicação dos números é: " << num1 * num2 << "\n\n";
    }

    if (seletor == 4){
        if (num2 == 0){
            cout << "Não é possível a divisão por 0" << "\n\n";
        }
        else{
            cout << "A divisão do número 1 pelo número 2 é: " << num1 / num2 << "\n\n";
        }
    }
 
}