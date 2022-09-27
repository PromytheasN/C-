#include <iostream>
using namespace std;

fibRec(int n){
    if(n <= 0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    return fibRec(n-1) + fibRec(n-2);

}
int main(){

    int n;
    cout << "Please inser the Nth fibonacci sequance. " << endl;
    cin >> n;
    cout << "The " << n << "th fibonacci number is: " << fibRec(n) << endl;
    return 0;
}
