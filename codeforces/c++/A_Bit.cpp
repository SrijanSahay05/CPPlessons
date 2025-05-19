#include <iostream>
using namespace std; 
int main(){
    int testCases; 
    int x=0;
    string command; 
    cin >> testCases; 
    for (int i=0; i<testCases; i++){
        cin >> command; 
        if (command == "++X" || command == "++x" || command =="X++" || command=="x++"){
            x++;
        }
        if (command == "--X" || command == "--x" || command =="X--" || command=="x--"){
            x--;
        }
    }
    cout << x;
    return 0; 
}