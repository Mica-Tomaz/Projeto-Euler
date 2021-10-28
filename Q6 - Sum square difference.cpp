#include <iostream>
#include <vector>

                                                                // Questão 6 - Sum square difference
using namespace std;

int main(void){
    int soma = 0, quadrados = 0;
    for(int i = 1; i <= 100; i++){                              // encontro o valor da soma dos quadrados de forma 
        soma += i*i;
    }
    quadrados = (50*(1 + 100))*(50*(1 + 100));                  // usei a formula da soma de uma progressão aritimética e a elevei ao quadrado 
    cout << quadrados - soma << endl;                           // retornando a diferença
    return 0;
}
