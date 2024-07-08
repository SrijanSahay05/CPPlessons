#include <iostream>
using namespace std; 

int factorial(int n){
    int factorial = 1;
    while (n > 1){
        factorial = factorial * n;
        n--;
    }
    return factorial;  
}

int main(){
    // int num = 6;
    // int fact = 1; 
    // while (num > 0){
    //     fact *= num; 
    //     num -= 1;
    // }
    // cout << fact ;
    cout << factorial(6) ;
    return 0;
}