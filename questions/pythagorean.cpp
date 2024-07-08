#include <iostream>
#include<math.h>
using namespace std;

bool pythagorian(int num1, int num2, int num3){
    if (pow(num1, 2)+pow(num2, 2)==pow(num3,2)){
        return true;
    }
    return false;
}
int main(){
    int num1, num2, num3; 
    cin >> num1 >> num2 >> num3;
    if (pythagorian(num1, num2, num3)){
        cout << "Pythagorian Triplet" << endl;
    }
    else{
        cout << "Not a triplet " << endl;
    }
    return 0;
}