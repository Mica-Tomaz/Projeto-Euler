#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


                                                                                            // Questão 29 - Distinct powers

using namespace std;
using std::find;

int main(void){
    double aux;
    int cont = 0;
    vector <double> lista;                                                                  // faz um vector do tipo double chamado lista                                                               
    for(int i = 2; i <= 100; i++){                                                          // faz um for duplo que carrega os possíveis valores de a e b
        for(int j = 2; j <= 100; j++){                                      
            aux = pow(i,j);                                                                 // salva a potenciação de i e j em aux
            if ( std::find(lista.begin(), lista.end(), aux) == lista.end() ){               // se o valor de aux não existir no vetor lista, adcionamos esse valor ao vetor lista
                lista.push_back(aux);
                cont++;                                                                     // contamos quantas vezes adcionamos um valor a lista
            }
        }
    }
    cout << cont << endl;                                                                   // retorna a contagem
    return 0;
}
