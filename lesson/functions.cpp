#include <iostream>
#include <cmath>
using namespace std; 

void sayHi() {
    cout << "Hello User" << endl;
}
void add(int a, int b); //declaring a function up here but assigning values to function after int main()

double cube(double num){
    double result = num * num * num;
    return result; //return keyword in cpp breaks out of the function. so anything after the return keyword inside a defined function is not gonna execute
    
}
int main () {
    sayHi();
    add(2,5);
    double ans = cube(5.12);
    cout << ans << endl;
    return 0;
}

void add(int a, int b) {
    cout << a + b << endl;
}