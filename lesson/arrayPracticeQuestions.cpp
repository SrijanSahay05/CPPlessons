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

void longestArithmaticSubarray(int numOfElements, int numArray[]){ //not working for {1,2,3,2,1} type input
    int previousLength = 0; 
    int counter =1; 
    for(int i=1; i<numOfElements;i++){
        if((numArray[i-1]+numArray[i+1])%2 == 0 && numArray[i]==(numArray[i-1]+numArray[i+1])/2){
            counter++;
            cout << "Counter ++ " << endl;
        }
        else{
            counter = 0;
            cout << "Counter = 0" << endl;
        } 
        if(counter > previousLength){
            previousLength = counter;
        }
    }
    cout << "The longest arithmatic subarray is of " << previousLength + 1 <<" elements" <<endl;
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
    longestArithmaticSubarray(numOfElements, numArray);
    
    
    cout << endl;
    return 0;
}


