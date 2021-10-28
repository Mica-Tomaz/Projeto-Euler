#include <iostream>
#include <vector>
// questão 4 - Largest palindrome product
using namespace std;

bool verifica(int numero){  // função que verifica se o numero é um palindromo
    int a = numero, novo = 0;
    while(a > 0){// invertendo o numero 
        novo = (novo + a%10)*10;
        a = a/10;
    }
    novo /= 10;
    if(novo == numero){// comparando o numero dado e o numero invertido
        return 1;
    }
    else{
        return 0;
    }
}
int main(void){
    long int maior = 0;
    for(int i = 999; i >= 100; i--){// testando todas as multiplicações com 3 dígitos possiveis
        for(int j = 999; j >= 100; j--){
            if(verifica(i*j) && maior < i*j){// armazenando o maior palindromo 
                maior = i*j;
            }
        }
    }
    cout << maior << endl;
    return 0;
}
