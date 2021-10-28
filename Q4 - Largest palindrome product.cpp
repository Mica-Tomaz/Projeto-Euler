#include <iostream>
#include <vector>

using namespace std;

                                                        // questão 4 - Largest palindrome product

bool verifica(int numero){                              // função que verifica se o numero é um palindromo
    int a = numero, novo = 0;                           // crio duas variáveis auxiliares, uma que copia o número e outra que vai armazenar o invertido
    while(a > 0){                                       // invertendo o numero 
        novo = (novo + a%10)*10;                        
        a = a/10;
    }
    novo /= 10;
    if(novo == numero){                                 // comparando o número dado e o número invertido
        return 1;
    }
    else{
        return 0;
    }
}
int main(void){
    long int maior = 0;
    for(int i = 999; i >= 100; i--){                    // testando todas as multiplicações com 3 dígitos possiveis
        for(int j = 999; j >= 100; j--){
            if(verifica(i*j) && maior < i*j){           // verifica se o numero é um palindromo e salva o maior 
                maior = i*j;
            }
        }
    }
    cout << maior << endl;                              // imprime o número salvo
    return 0;
}
