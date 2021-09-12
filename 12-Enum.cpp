/*

O C++ permite aos programadores criarem seus próprios tipos de dados.
O tipo de dados mais simples definido pelo usuário é o tipo enumerado (enum).
Ele é um tipo de dados em que cada valor possível é definido como uma constante simbólica (chamada de enumerador).

*/

#include <iostream>
#include <string>
using namespace std;

// Definição de um Enum
enum Cor
{
    cor_azul,
    cor_marrom,
    cor_verde
};
 
string getCorName(Cor cor)
{
    if (cor == cor_azul)
        return "Azul";
    if (cor == cor_marrom)
        return "Marrom";
    if (cor == cor_verde)
        return "Verde";

    return "?";
}
 
int main()
{
    // Declara variável do tipo enum
    Cor cor_carro = { cor_azul };
 
    // Imprime na tela
    cout << "\nID  da Cor do seu carro: " << cor_carro << "\n\n";

    cout << "\nCor do seu carro: " << getCorName(cor_carro) << "\n\n";
}