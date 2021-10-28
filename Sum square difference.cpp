#include <iostream>
#include <vector>

//questão 6 - Sum square difference
using namespace std;

int main(void){
    int soma = 0, quadrados = 0;
    for(int i = 1; i <= 100; i++){
        soma += i*i;
    }
    quadrados = (50*(1 + 100))*(50*(1 + 100));
    cout << quadrados - soma << endl;
    return 0;
}
