/*

O C++ permite criar nossos próprios tipos de dados agregados. Um dos tipos de dados agregados mais simples é o struct. 
Um tipo de dados agregado é um tipo de dados que agrupa diversas variáveis individuais. 
Um struct (abreviação de estrutura) permite agrupar variáveis de tipos de dados mistos em uma única unidade.

*/

#include <iostream>
using namespace std;

// Declaração de um struct
struct Funcionario
{
    int id;
    int idade;
    double salario;
};
 
// Função (void é vázio)
void imprimeFunc(Funcionario func)
{
    cout << "ID:   " << func.id << '\n';
    cout << "Idade:  " << func.idade << '\n';
    cout << "Salário: " << func.salario << '\n';
}
 
int main()
{
    // Inicializa a variável chamada bob do tipo Funcionario
    Funcionario bob = { 1001, 42, 3589.15 };

    // Inicializa a variável chamada maria do tipo Funcionario
    Funcionario maria = { 2003, 28, 4561.27 };
 
    // Imprime Bob
    cout << "\nDados do Bob:" << "\n";
    imprimeFunc(bob);
 
    // Imprime Maria
    cout << "\nDados da Maria:" << "\n";
    imprimeFunc(maria);
 }