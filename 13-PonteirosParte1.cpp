/*

Uma variável é o nome de uma parte da memória que contém um valor.
Quando nosso programa instancia uma variável, um endereço de memória livre é automaticamente atribuído
à variável e qualquer valor que atribuímos à variável é armazenado neste endereço de memória.

O bom das variáveis é que não precisamos nos preocupar com o endereço de memória específico atribuído.
Apenas nos referimos à variável por seu identificador fornecido (nome da variável), e o compilador traduz
esse nome para o endereço de memória atribuído apropriadamente.

Um ponteiro é uma variável que contém um endereço de memória como seu valor.

*/

#include <iostream>
using namespace std;
 
int main()
{
    int x = 5;

    // Imprime o valor da variável x (nesse caso, 5)
    cout << x << "\n"; 

    // Imprime o endereço de memória do valor da variável x (em meu exemplo, 0073F7FC)
    cout << &x << "\n"; 

    // Imprime o valor no endereço de memória da variavel x (em meu exemplo, 5)
    cout << *&x << "\n"; 

    // Inicializa a variável ptr (abreviação padrão para ponteiro) com o endereço de memória da variável x
    // Aponta para um endereço de memória que armazena um valor inteiro
    int *ptr = &x; 

    // Imprime o valor da variável ptr, que é o endereço da variável x (em eu caso, 0073F7FC)
    cout << ptr << "\n"; 

    // Obtém o endereço de ptr (é o endereço do endereço)
    int  **pptr;
    pptr = &ptr;
    cout << pptr << "\n"; 

    return 0;
}
