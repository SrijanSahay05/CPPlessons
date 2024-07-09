#include <iostream>
using namespace std; 

// not the most efficient way of calculating nCr
int factorial(int num){
    int factorial = 1;
    while (num > 1){
        factorial = factorial * num;
        num--;
    }
    return factorial;  
}
int nCr(int n, int r){
    int nCr = factorial(n) / (factorial(n-r) * factorial(r)); 
    return nCr;
}
int main(){
    int n, r; 
    cout << "Enter n and r:  " ;
    cin >> n >> r;  
    cout << endl << "nCr = " << nCr(n, r) << endl;
}
