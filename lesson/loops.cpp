#include <iostream>

using namespace std; 

int main() {
    int counter = 1; 
    //while loop : checks the condition before code execution, 
    while (counter <= 5)
    {
        cout << counter << endl;
        counter++;
    }
    //do while loop : checks the condition after the code execution, ensures that the code is executed at least once
    
    counter = 1;
    do
    {
        cout << counter << ",";
        counter++;
    } 
    while (counter <= 5);
    cout << endl;
    
    //for loop
    counter = 0;
    for(counter; counter<=10; counter++){
        cout << counter << endl;
    }    


    return 0;
}