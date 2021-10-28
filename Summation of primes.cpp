#include <iostream>
#include <vector>
#include <cmath>

//questão 10 - Summation of primes

using namespace std;

bool eh_primo(int num){// função que verifica se o numero é primo 
    int a = 2;
    int x = sqrt(num);
    if(num == 1 || num == 0){
        return 0;
    }
    while(a <= x){
        if(num%a == 0){
            return 0;
        }
        a++;
    }
    return 1;
}

int main(void){
    long long int soma = 0;// testa se os numeros são primos e soma todos.
    for(long long int i = 1; i <= 2000000; i++){
        if(eh_primo(i)){
            soma += i;
        }
    }
    cout << soma << endl;
    return 0;
}
