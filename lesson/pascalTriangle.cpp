#include <iostream>
using namespace std; 
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
    int n = 5; 
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}