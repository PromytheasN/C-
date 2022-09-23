#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    //Base case
    if(n == 1){
        return result;
    }
    result = n * factorial(n-1);
    return result;
}

int main(){

    cout << factorial(3) << endl;
    return 0;
}
