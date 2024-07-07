#include <iostream>
using namespace std; 

int main(){
    
    int age; 
    string fullname;
    string friendsName, friendsGender;  

    cout << "Enter your full name: " ;
    getline(cin, fullname); //getline is better for taking in string as the whitespace doesn't terminate the input 
    // cin.ignore(); //clears any cin buffer 
    cout << fullname << " enter your age (integral value): " ;
    cin >> age ;   //cin only takes one value as the input and treats the whitespace/tabs as terminating characters 
    cout << "The age entered is " << age << endl; 

    cout << "Now enter your friend's first name and gender : " ;
    cin >> friendsName >> friendsGender; //
    cout << "Welcome, " << friendsName << "! " << "Restroom for " << friendsGender << "s is that way." << endl; 
    
    return 0;
}