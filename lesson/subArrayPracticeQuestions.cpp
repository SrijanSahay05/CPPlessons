
#include <iostream>
#include <climits>
using namespace std;

void arrayPrint(int numOfElements, int numArray[]){
    for (int i=0; i<numOfElements; i++){
        cout << numArray[i] << " ";
    }
}

void subArrayPrinting(int numOfElements, int numArray[]){
    for(int i=0; i<numOfElements; i++){
        for(int j=i; j<numOfElements; j++){
            for(int k=i;k<=j;k++){
                cout << numArray[k] << " "; 
            }
            cout << endl;
        }
    }
}

void maxSumSubArray(int numOfElements, int numArray[]){
    // Using Brute force // O(n^3)
    int MaxSum = INT_MIN;
    for(int i=0; i<numOfElements; i++){
        for(int j=i; j<numOfElements; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += numArray[k];
            }
            MaxSum = max(sum, MaxSum);
            
        }
    }
    cout << "The Maximum Sum for all sub arrays: " << MaxSum;
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
    maxSumSubArray(numOfElements, numArray);

    cout << " " << endl;
    return 0;
}