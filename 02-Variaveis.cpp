/*
Os objetos podem ser nomeados ou não nomeados (anônimos).
Um objetos nomeado é chamado de variável e o nome do objeto é chamado de
identificador.
*/

#include <iostream>
using namespace std;

int main()
{
    // x é o identificador da variável (registra uma área na memória com nome x).
    int x;

    // Inicializa a variável, coloca o valor na posição de memória registrada.
    x = 0; 

    cout << "X é zero!!!" << endl;
    return x;
}