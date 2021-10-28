
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


                                                                    // Questão 24 - Lexicographic permutations

using namespace std;
using std::find;

int main(void){
    char x[11] = "0123456789";                                      // fiz um vetor tipo char com os numeros de 0 até 9
    for(int i = 1; i < 1000000; i++){                               // faz 1000000 de permutações consecutivas
        std::next_permutation(&x[0],&x[10]);                        // essa função permuta um vetor ou um trecho de um vetor
    }
    cout << x << endl;                                              // retorna a ultima permutação, que no caso foi a 1000000º permutação
    return 0;
}
