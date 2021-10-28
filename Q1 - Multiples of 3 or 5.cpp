#include <iostream>

using namespace std;

//Questão 1 - Multiples of 3 or 5

int main(void){
    long soma = 0;
    
    for (int i = 1; i < 1000; i ++){//pecorre os números de 1 até 1000 e verifica se é multiplo de 3 ou 5
        if(i%3 == 0 || i%5 == 0){
            soma += i;
        }
    }

    cout << soma << endl;//retorna a soma dos multiplos
    return 0;
}
