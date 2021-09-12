/*

Continuação sobre ponteiros no C++

*/

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n";

    // Declara um array de inteiros
    int array[5] = { 9, 7, 5, 3, 1 };

    cout << "\n";

    // Imprime o array (imprime o endereço de memória do primeiro elemento do array: 012FFD30).
    cout << "Conteúdo do array: " << array << "\n"; 

    cout << "\n";

    // Imprime cada elemento do array (usamos loops para isso).
    cout << "Os valores no array são: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";

    // Imprime o primeiro e terceiro elemento do array (9 e 5, nesse caso).
    cout << "Primeiro elemento do array: " << array[0] << "\n";
    cout << "Terceiro elemento do array: " << array[2] << "\n";

    cout << "\n";

    // Imprime o endereço do array (012FFD30).
    cout << "Endereço do array: " << &array << "\n"; 

    cout << "\n";
 
    // Imprime o endereço do primeiro (012FFD30) e terceiro (012FFD38) elemento do array.
    cout << "Endereço do primeiro elemento do array: " << &array[0] << "\n";
    cout << "Endereço do terceiro elemento do array: " << &array[2] << "\n";

    cout << "\n";

    // Declara a variável do tipo ponteiro e inicializa com o array.
    int *ptr = array;

    cout << "\n";

    // Imprime o valor da variável ponteiro (012FFD30).
    cout << "Valor do ponteiro: " << ptr << "\n"; 

    cout << "\n";
    
    // Imprime o valor para o qual o ponteiro aponta (é o primeiro elemento do array: 9)
    cout << "Valor para o qual o ponteiro aponta: " << *ptr << "\n"; 

    cout << "\n";

    // Imprime cada valor do array para o qual o ponteiro aponta
    // Inicia no endereço do primeiro elemento do array e vai encrementando esse endereço para os demais elementos do array
    cout << "Os valores no array são: ";
    for(int i = 0; i < 5; i++) {
        cout << "Valor: " << *ptr << " - Endereco: "<< ptr << "\n";
        ptr++;
    }

    cout << "\n";
    cout << "\n";
 
    return 0;
}