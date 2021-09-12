/*
A instrução de loop mais utilizada em C++ é a instrução for.

Definição:

for (init-statement; condition; end-expression)
   statement

*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 9; i >= 0; i -= 2)
    {
        cout << i << " ";
    }
    
}