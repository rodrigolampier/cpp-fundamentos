/*

Encapsulamento em C++

Encapsulamento é garantir que dados "confidenciais" sejam ocultados dos usuários. 
Para conseguir isso, declararamos variáveis/atributos de classe como privados (não podem ser acessados de fora da classe). 
Podemos fornecer os métodos get e set como públicos para acesso a essas variáveis/atributos privados.
É considerada uma boa prática declarar seus atributos de classe como privados (sempre que possível). 

*/

#include <iostream>
using namespace std;

class Funcionario {

  private:
    // Atributo privado
    int salario;

  public:
    
    // Setter
    void setSalario(int s) {
      salario = s;
    }
    
    // Getter
    int getSalario() {
      return salario;
    }
};

int main() {
  
  Funcionario bob;
  
  bob.setSalario(12000);
  
  cout << bob.getSalario() << endl;
  
  return 0;
}