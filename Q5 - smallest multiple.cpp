#include <iostream>
#include <vector>

                                                            //Questão 5 - smallest multiple 
using namespace std;

int main(void){
    int a = 1, cont = 0, salvo = 0;
    while(salvo == 0){
        for(int i = 1; i <= 20; i++){                       // verifica multiplos de 1 até 20 
            if(a%i == 0){                                   
                cont ++;                                    // conta quantos multiplos existem
            }
        }
        if(cont == 20){                                     // verifica se existe 20 multiplo
            salvo = a;                                      // salva o numero com essa condição e consequentemente para o while
        }
        else{
            a++;
            cont = 0;
        }
    }
    cout << salvo << endl;                                  
    return 0;
}
