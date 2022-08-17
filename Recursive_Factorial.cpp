#include <iostream>
using namespace std;

int recursive_factorial(int n){

    if (n >= 1)
        return n * recursive_factorial(n -1);
    else
        return 1;
}

int main(){

    int n = 3;
    cout << "Factorial is = " << recursive_factorial(n);
}