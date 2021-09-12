/* 

Recursão é a definição de uma sub-rotina (função ou método) que pode chamar a si mesma. 
Um exemplo de recursão é o cálculo do fatorial de um número.
O fatorial é representado pelo símbolo “!”. Definimos como n! (n fatorial) a multiplicação de n por todos os seus antecessores 
até chegar em 1. 
n! = n · (n – 1)· (n – 2) · … · 3 · 2 · 1
Exemplo:
7! = 7· 6 · 5 · 4 · 3 · 2 · 1 = 5040

*/

#include <iostream>
using namespace std;

int fatorial(int n) {

    if (n > 1) 
    {    
        return n * fatorial(n - 1);
    } 
    else 
    {
        return 1;
    }

}

int main() {

    int n, resultado;

    cout << "Digite um número não-negativo: ";
    cin >> n;

    resultado = fatorial(n);

    cout << "Fatorial de " << n << " = " << resultado << endl;

    return 0;
}
