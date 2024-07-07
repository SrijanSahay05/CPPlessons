#include <iostream>
using namespace std; 
int main(){
    int num=152; 
    int ognum = num;
    int lastDigit; 
    int arm = 0;
    while ( num > 0)
    {
        lastDigit = num % 10; 
        arm += pow(lastDigit, 3); 
        num = num / 10;
    }
    if(arm == ognum){
        cout << "Strong Number " << arm << endl;
    }
    else{
        cout << "Weak Number " << arm << endl;
    }
    return 0;
}