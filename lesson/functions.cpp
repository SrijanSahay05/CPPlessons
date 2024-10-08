#include <iostream>
#include <cmath>
using namespace std; 

void sayHi() {
    cout << "Hello User" << endl;
}
void add(int a, int b); //declaring a function up here but assigning values to function after int main()

int sum(int num1, int num2){
    int sum = num1 + num2; 
    return sum;
}
double cube(double num){
    double result = num * num * num;
    return result; //return keyword in cpp breaks out of the function. so anything after the return keyword inside a defined function is not gonna execute
    
}
int main () {
    sayHi();
    add(2,5);
    double ans = cube(5.12);
    cout << ans << endl;
    cout << sum(3,5) << endl;
    return 0;
}

void add(int a, int b) {
    cout << a + b << endl;
}

//variables in functions work as a stack. the top most / the most recently called function is pushed to the top of the stack and when the funciton completes the execution of the stack the function gets popped out