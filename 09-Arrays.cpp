/*
Um array é um tipo de dados agregado que permite acessar muitas variáveis do mesmo tipo por meio de um único identificador.
Para declarar um array, usamos colchetes ([]) e quantas variáveis iremos alocar (comprimento do array).

Cada uma das variáveis em um array é chamada de elemento. Para acessar elementos individuais de um array, usamos o nome do array,
junto com o operador [] e um parâmetro chamado índice, que informa ao compilador qual elemento queremos do array.
*/

#include <iostream>
using namespace std;

int main()
{
    // Cria um array de números inteiros
    int lista[5]; 

    // Atribui valores a cada elemento do array
    lista[0] = 1; 
    lista[1] = 2;
    lista[2] = 3;
    lista[3] = 4;
    lista[4] = 5; 

    // Percore o array imprimindo os seus valores
    for (int count = 0; count <= 4; ++count)
        cout << "Elemento do array no índice " << count << " é: " << lista[count] << "\n";


    // Não definimos o tamanho do array de forma explícita, mas sim através de atribuição dos valores dos elementos (alocação dinâmica)
    int lista_num2[] = { 1, 2, 3, 4, 5, 6, 7 }; 

    cout << "\n\nImprime Array:\n";
    for (int a = 0; a <= 6; ++a)
        cout << "Elemento do array no índice " << a << " é igual a " << lista_num2[a] << "\n";

    // Caso peça para imprimir uma posição que não existe no array, será impresso qualquer valor aleatório
    int a[3] = {1, 2, 3};
    cout << "Não existe posição 9 nesse array... está imprimindo lixo!: " << a[9] << endl;
 
}
