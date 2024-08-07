#include <iostream>
using namespace std;

void arrayPrint(int numOfElements, int numArray[]){
    for (int i=0; i<numOfElements; i++){
        cout << numArray[i] << " ";
    }
}

void subArrayPrinting(int numOfElements, int numArray[]){
    for(int i=0; i<numOfElements; i++){
        for(int k=0; k<numOfElements-i; k++){
            for(int j=k; j<numOfElements-i; j++){
                cout << numArray[j] << " "; 
            }
            cout << endl;
        }
    }
}

void maxSumSubArray(int numOfElements, int numArray[]){
    // Using Brute force
}

int main(){
    //Array Input from User
    int numOfElements; 
    int* numArray = new int[numOfElements];
    cout << "Enter the number of Elements : " ; 
    cin >> numOfElements; 
    cout << endl << "Enter the Array : " ; 
    for(int i=0; i<numOfElements; i++){
        cin >> numArray[i];
    }
    subArrayPrinting(numOfElements, numArray);
    return 0;
}