#include <iostream>
using namespace std; 

int sum(int a, int b){
    int sum = a + b; 
    cout << "This will be executed" << endl;
    return sum;
    cout << "This wont be exectued" << endl;
}

int main(){
    cout << sum(4, 5);
}