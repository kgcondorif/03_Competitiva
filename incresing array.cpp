#include <iostream>

using namespace std;

int main (){
    long n, k = 0;

    cin >> n;

    long arreglo[n];

    for(long i = 0; i < n; i++){
        cin >> arreglo[i];
    }
    for (long i = 0; i < n - 1; i++){        
        while(arreglo[i] > arreglo[i + 1]){
            arreglo[i + 1]++;
            k++;
        }
    }
    cout << k;

    return 0;
}