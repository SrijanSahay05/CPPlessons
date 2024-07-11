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

void sumOfSubArrays(int numOfElements, int numArray[]){
    for (int i=0; i<numOfElements; i++){
        int sum = 0;
        for (int j=i; j<numOfElements; j++){
            sum += numArray[j];
            cout << "Sum of SubArray " << i+1 <<": ";
            cout << sum << endl;
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
    sumOfSubArrays(numOfElements, numArray);
    
    
    cout << endl;
    return 0;
}


