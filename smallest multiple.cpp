#include <iostream>
#include <vector>

//questão 5 - smallest multiple 
using namespace std;

int main(void){
    int a = 1, cont = 0, salvo = 0;
    while(salvo == 0){
        for(int i = 1; i <= 20; i++){// conta os multiplo de 1 até 20 
            if(a%i == 0){
                cont ++;
            }
        }
        if(cont == 20){// verifica se existe 20 multiplos
            salvo = a;
        }
        else{
            a++;
            cont = 0;
        }
    }
    cout << salvo << endl;
    return 0;
}
