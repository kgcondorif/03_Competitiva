#include <iostream>

using namespace std;

int main(){
    long n, k = 1, zero = 0;

    cin >> n;

    n = n - (n % 5);
    while(k < n){
        k *= 5;
        zero += n / k;
    }

    cout << zero << endl;

    return 0;
}