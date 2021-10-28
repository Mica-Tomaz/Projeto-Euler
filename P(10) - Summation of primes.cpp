#include <iostream>
#include <vector>
#include <cmath>

                                                            //questão 10 - Summation of primes

using namespace std;

bool eh_primo(int num){                                     // função que verifica se o numero é primo 
    int a = 2;
    int x = sqrt(num);                                      // encontro a raiz do numero                                   
    if(num == 1 || num == 0){
        return 0;
    }
    while(a <= x){                                          // o maior divisor possível de um numero em uma fatoração é a sua raiz, por isso o meu teste vai até a raiz do numero(raiz arredondada para o valor mais alto)
        if(num%a == 0){                                     // se até essa raiz existir algum divisor, o número não é primo
            return 0;
        }
        a++;
    }
    return 1;
}

int main(void){
    long long int soma = 0;                                
    for(long long int i = 1; i <= 2000000; i++){            // testa se os numeros são primos e soma todos.
        if(eh_primo(i)){
            soma += i;
        }
    }
    cout << soma << endl;                                   // retorna a soma 
    return 0;
}
