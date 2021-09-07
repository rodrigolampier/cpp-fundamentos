// Hello World em C++

/*
Linhas que começam com # são diretivas (semelhante a um pacote em Python).
Podemos escrever nossas próprias diretivas (arquivos .h)
Elas são lidas e interpretadas pelo pré-processador antes do início da compilação do próprio programa.
No exemplo abaixo, o pré-processador vai incluir uma seção de código C++
padrão, conhecido como cabeçaho iostream, que permite realizar operações
de entrada e saída (em nosso programa, estamos escrevendo na 
tela/terminal).
*/
#include <iostream>

/*
A namespace é uma forma de identificar, de maneira única, um conjunto de
funções para tarefas específicas.
No exemplo abaixo, std é usado para tarefas padrões.
*/
using namespace std;

/*
Aqui criamos uma função. Todo programa C++ precisa de uma função com nome main.
Criamos uma função apenas colocando o nome dela, o tipo que ela retorna e o par de chaves.
Podemos também passar atributos, que são opcionais. 
*/
int main() {

    // cout é uma instrução que envia algo para o terminal de saída.
    // No exemplo abaixo, cout recebe um texto que será colocado no terminal.
    cout << "Hello World!";

    // Função para imprimir no terminal de saída (nesse caso. imprimi uma nova linha).
    printf("\n");

    // Retornamos zero por causa da função main esperar uma saída inteira.
    // Mas nesse nosso exemplo esse zero não vai ser usado para nada.
    return 0;
}
