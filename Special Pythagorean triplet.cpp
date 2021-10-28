#include <iostream>
#include <vector>
#include <math.h>

//questão 9 - Special Pythagorean triplet

using namespace std;

int main(){ 
    long long int salvo = 0;
    int a;
    for(int b = 1; b <= 1000; b++){
        for(int c = 1; c <= 1000; c++){
            a = (1000 - b - c);
            if(a == sqrt(b*b + c*c)){// se a = (b^2 + c^2)^(1/2) 
                cout << a*b*c << endl;
            }
        }
    }
        
}