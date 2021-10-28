#include <iostream>
#include <vector>

using namespace std;

int main(void){
    
    vector <long int> fibo;
    fibo.push_back(1);
    fibo.push_back(2);
    long int soma = 2;
    int a = 2;
    while (fibo[a-1] <= 4000000){
        fibo.push_back(fibo[a-1] + fibo[a-2]);
        a = a + 1;
        if(fibo[a - 1]%2 == 0){
            soma += fibo[a - 1];
        }
    }
    cout << soma << endl;
    return 0;
}
