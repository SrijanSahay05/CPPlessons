#include <iostream>
using namespace std; 
int main(){
    int num = 6;
    int fact = 1; 
    while (num > 0)
    {
        fact *= num; 
        num -= 1;
    }
    
    cout << fact ;
    return 0;
}