#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


//questão 29 - Distinct powers

using namespace std;
using std::find;

int main(void){
    double aux;
    int cont = 0;
    vector <double> lista;
    for(int i = 2; i <= 100; i++){
        for(int j = 2; j <= 100; j++){
            aux = pow(i,j);
            if ( std::find(lista.begin(), lista.end(), aux) == lista.end() ){
                lista.push_back(aux);
                cont++;
            }
        }
    }
    cout << cont << endl;
    return 0;
}
