#include <iostream>
#include <vector>

                                                                        //Questão 7 - 10001st prime

using namespace std;

bool eh_primo(int num){                                                 // função que verifica se o numero é primo 
    int cont = 0;
    for(int a = 1; a <= num; a++ ){                                     // conta o numero de divisores do numero desejado
        if(num%a == 0){
            cont++;
        }
    }
    if(cont == 2){                                                      // se o numero de divisores é 2, então o numero é primo
        return 1;                                                       // retorna verdadeiro
    }
    else{                                                               // caso não
        return 0;                                                       // retorna falso
    }
}

int main(void){
    int aux = 0, ultimo = 0, aux1 = 1;
    while(aux < 10001){                                                 // verifica todos os primeiros 10001 primos
        if(eh_primo(aux1)){
            aux++;                                                      // caso o numero seja primo, adciona 1 ao meu contador "aux", quando o contador chegar a 10001 o while para
        }
        aux1 ++;                                                        // aux1 contabiliza o valor do primo
    }
    cout << aux1 - 1 << endl;                                           // no último loop é adcionado 1 ao aux1, por isso eu diminui
    return 0;
}
