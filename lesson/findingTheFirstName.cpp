#include <iostream>
using namespace std; 

int main () {
    string fullname ; 
    cout << "Enter your full name " ;
    getline(cin, fullname);
    fullname = fullname + " "; 
    int firstNameLen = fullname.find(" ") + 1 ; 
    cout << fullname.substr(0, firstNameLen) << endl;



    return 0; 
}