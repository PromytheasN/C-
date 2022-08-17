#include <iostream>
using namespace std;

int recursion_fib (int n){

    if (n >= 3)
        return recursion_fib (n -1) + recursion_fib(n-2);
    else 
        return 1;
}

int main(){

    int num;
    cout << "Please insert the Nth fibonacci you would like to find" << endl;

    //Assume num is positive
    cin >> num;
    cout << "The value of the fib number in that location is: " << recursion_fib(num);

}