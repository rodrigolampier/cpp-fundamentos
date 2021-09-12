/*

Overloading em C++

O C++ permite mais de uma definição para um nome de função ou um operador no mesmo escopo, que é chamado 
de sobrecarga de função e sobrecarga de operador, respectivamente.

Uma declaração sobrecarregada é uma declaração que é declarada com o mesmo nome de uma declaração anteriormente declarada no mesmo escopo, 
exceto que ambas as declarações têm argumentos diferentes e definições (implementação) diferentes.

Quando chamamos uma função ou operador sobrecarregado, o compilador determina a definição mais apropriada a ser usada, comparando os 
tipos de argumento usados ​​para chamar a função ou operador com os tipos de parâmetro especificados nas definições. 

O processo de seleção da função ou operador sobrecarregado mais apropriado é denominado resolução de sobrecarga.

*/
  
#include <iostream>
using namespace std;
 
class imprimeDados {
   
   public:

      void print(int i) {
        cout << "Imprimindo int: " << i << endl;
      }

      void print(double  f) {
        cout << "Imprimindo float: " << f << endl;
      }

      void print(char* c) {
        cout << "Imprimindo caracter: " << c << endl;
      }
};

int main(void) {

   imprimeDados func1;
 
   // Imprime valor inteiro
   func1.print(7);
   
   // Imprime valor float
   func1.print(356.678);
   
   // Imprime caracter
   func1.print((char*) "Hello C++");
 
   return 0;

}