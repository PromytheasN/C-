//Recursive Factorial
#include <iostream>
using namespace std;

int recursive_fac(int n){

    if (n >= 1)
        return n * recursive_fac(n - 1);
    else
        return 1;
}

int main(){

    int num;
    cout << "Enter a positive number! " << endl;
    cin >> num;
    cout << "The recursive num is " << recursive_fac(num);

}