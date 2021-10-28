#include <iostream>
#include <vector>

using namespace std;
                                                    // Questão 3 - largest prime factor
int main(void){
    
    vector <long int> primos;
    long int numero = 600851475143, x = 0;
    int cont = 0, i = 2;
    while(numero > 1){
        for(int a = 1; a <= i; a++ ){               // conta quantos divisores o numero tem
            if(i%a == 0){
                cont++;
            }
        }
        if(cont == 2 && numero%i == 0){             // verifica se o numero é primo
            while(numero%i == 0){                   // fatora o quanto possível pelo numero primo encontrado
                numero = numero/i;
            }
            primos.push_back(i);                    // adciona o numero primo em um vector de tamanho variável
        }
        i++;
        cont = 0;
    }
    
    
    x = primos.size();                              // como estou adcionando em ordem crescente o último número do meu vector será o maior primo
    
    cout << primos[x-1] << endl;
    return 0;
}
