
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


//questão 24 - Lexicographic permutations

using namespace std;
using std::find;

int main(void){
    char x[11] = "0123456789";
    for(int i = 1; i < 1000000; i++){
        std::next_permutation(&x[0],&x[10]);
    }
    cout << x << endl;
    return 0;
}