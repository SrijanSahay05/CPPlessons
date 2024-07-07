#include <iostream>
#include <cmath>

using namespace std; 

int main(){
    int wnum = 5; 
    double dnum = 5.5; //similar to float but double can store longer decimals

    cout << "10 / 3 = " << 10 / 3 << endl; //gives back the integral value only if int values are only used
    cout << "10.00/3 = " << 10.00/3 << endl; //gives back the answer in decimal form (if any one is decimal)
    cout << "wnum = " << wnum << endl;
    wnum++ ; //incremnts wnum by 1 
    cout << "wnum is incremented by 1 = " << wnum << endl; 
    wnum += 2 ; // increase wnum by 2 
    cout << "wnum is incremented by 2 = " << wnum << endl; 
    wnum *=2 ; // wnum multiplied by 2 
    cout << "wnum is multiplied by 2 = " << wnum << endl;
    wnum /=2 ; // wnum divided by 2 
    cout << "wnum is divided by 2 = " << wnum << endl;
    wnum %=3 ; 
    cout << "remainder for wnum divided by 3 = " << wnum << endl;

    cout << "2 raised to the power of 5 = " << pow(2, 5)<< endl; // pow(base, expoent); takes both int and decimal 
    cout << "squareroot of 36 = " << sqrt(36.00) << endl; //sqrt(num) gives the square root; takes both int and decimal
    
    cout << "rounding of 4.3 = " << round(4.3) << endl; //round(num) rounds the number using the standard mathematical rules
    cout << "rounding of 4.6 = " << round(4.6) << endl;
    cout << "rounding of -4.3 = " << round(-4.3) << endl; 
    cout << "rounding of -4.6 = " << round(-4.6) << endl;
    
    cout << "ceiling function on 4.3, always gives the larger or equivalent number as the output = " << ceil(4.3) << endl;
    cout << "floor function on 4.3, always gives the smaller or equivalent number as the output = " << floor(4.3) << endl;
    cout << "ceiling function on -4.3, always gives the larger or equivalent number as the output = " << ceil(-4.3) << endl;
    cout << "floor function on -4.3, always gives the smaller or equivalent number as the output = " << floor(-4.3) << endl;
    
    cout << "using fmax to output the larger number between any two as the output " << fmax(10, 13) << endl; //fmax or fmin function take only two numeric argument returning the max or min values respectiviely 
    


    return 0; 
}