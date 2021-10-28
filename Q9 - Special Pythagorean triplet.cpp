#include <iostream>
#include <vector>
#include <math.h>

                                                        //questão 9 - Special Pythagorean triplet

using namespace std;

int main(){ 
    long long int salvo = 0;
    int a;
    for(int b = 1; b <= 1000; b++){                     // um for duplo que carrega todas as possibilidades de b e c
        for(int c = 1; c <= 1000; c++){
            a = (1000 - b - c);                         // condição imposta na questão
            if(a == sqrt(b*b + c*c)){                   // testando se é um Pythagorean triplet
                cout << a*b*c << endl;                  // retornando a multiplicação dos termos
            }
        }
    }
        
}
