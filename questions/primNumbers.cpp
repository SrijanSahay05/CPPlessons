#include <iostream>
using namespace std; 

// //to check if the number is prime or not
// int main(){
//     int n=10043521;
//     bool check=0;
//     for(int i=2; i<=(sqrt(n)); i++){
//         if (n%i==0){
//             cout << "Not Prime";
//             check = 1;
//             break;
//         }
//     }
//     if(check==0){
//         cout << "Prime";
//     }
//     return 0;
// }


// Using Function to print Prime numbers between two numbers
bool isPrime(int num){
    for(int i=2; i<=sqrt(num);i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }

    return 0;
}