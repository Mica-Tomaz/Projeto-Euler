#include <iostream>
#include <vector>

//questão 7 - 10001st prime

using namespace std;

bool eh_primo(int num){// função que verifica se o numero é primo 
    int cont = 0;
    for(int a = 1; a <= num; a++ ){// conta o numero de divisores 
        if(num%a == 0){
            cont++;
        }
    }
    if(cont == 2){// se o numero de divisores é 5, então o numero é primo
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int aux = 0, ultimo = 0, aux1 = 1;
    while(aux < 10001){// verifica todos os primeiros 10001 primos
        if(eh_primo(aux1)){
            aux++;
        }
        aux1 ++;
    }
    cout << aux1 - 1 << endl;
    return 0;
}
