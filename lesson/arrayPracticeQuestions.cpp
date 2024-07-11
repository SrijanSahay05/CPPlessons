#include <iostream>
#include <climits>
using namespace std; 



void arrayPrint(int numOfElements, int numArray[]){
    for (int i=0; i<numOfElements; i++){
        cout << numArray[i] << " ";
    }
}
void maxTillCurrent(int numOfElements, int numArray[]){
    int maximumValue = INT_MIN;
    for(int i=0; i<numOfElements; i++){
        if(numArray[i]>maximumValue){
            cout << numArray[i] << " ";
            maximumValue = numArray[i];
        }
        else{
            cout << maximumValue << " ";
        }
    }
}

int main(){
    int numOfElements; 
    int* numArray = new int[numOfElements];

    cout << "Enter the number of elements:  " ;   
    cin >> numOfElements; 

    cout << "Enter the elements: ";
    for(int i=0; i<numOfElements; i++){
        cin >> numArray[i];
    }
    maxTillCurrent(numOfElements, numArray);
    
    
    cout << endl;
    return 0;
}


