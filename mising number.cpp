#include <iostream>

using namespace std;

int main(){
    long n, sum = 0;

    cin >> n;
    long arreglo[n - 1];
    
    for(long i = 0; i < n - 1; i++){
        cin >> arreglo[i];
    }
    for(long i = 0; i < n - 1; i++){
        sum += arreglo[i];
    }

    cout << (n * (n + 1) / 2) - sum << endl;

    return 0;
}