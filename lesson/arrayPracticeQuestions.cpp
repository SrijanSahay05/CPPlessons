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


void longestArithmaticSubarray(int numOfElements, int numArray[]){ //not working for {1,2,3,2,1} type input #fixed
    int previousLength = 0; 
    int counter =1; 
    for(int i=1; i<numOfElements;i++){
        if((numArray[i-1]+numArray[i+1])%2 == 0 && numArray[i]==(numArray[i-1]+numArray[i+1])/2){ // had to check if a+c/2 is an inteeger or not 
            counter++;
            // cout << "Counter ++ " << endl;
        }
        else{
            counter = 0;
            // cout << "Counter = 0" << endl;
        } 
        if(counter > previousLength){
            previousLength = counter;
        }
    }
    cout << "The longest arithmatic subarray is of " << previousLength + 1 <<" elements" <<endl;
}

void recordBreakerDays(int numOfDays, int ticketSales[] ){
    int maxSales = 0; 
    int numRecordDays = 0;
    for (int i=0; i<numOfDays; i++){
        if(ticketSales[i]>maxSales){
            maxSales = ticketSales[i];
            if(ticketSales[i]>ticketSales[i+1] && ticketSales[i==maxSales]){
                // cout << "day: " << i << " value: " << ticketSales[i] <<endl;
                numRecordDays++;
            }
        } 
    }
    cout << "Record Breaking Days: " << numRecordDays; 
}

void indexRepeating(int numOfElements, int numArray[]){
    // //O(n^2) try to make it O(n) or O(logn)
    //  for (int i=0; i<numOfElements; i++){
    //     for (int j=i+1; j<numOfElements; j++){
    //         if (numArray[i]==numArray[j]){
    //             cout << "Lowest Repeated Index: "<< i << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "No Repeating Values " << endl;
    // return 0;
    
    //O(n) Time Complexity
    int minIndex = INT_MAX; 
    int* tempArray = new int[1000001];

    //Temp Array Initialisation
    for(int i=0; i<=1000001; i++){
        tempArray[i] = -1;
    }
   
   //Iterating over all the values
    for (int i=0; i<numOfElements; i++){
        if (tempArray[numArray[i]] == -1){
            tempArray[numArray[i]]=i;
        }
        else{
            minIndex = min(minIndex, tempArray[numArray[i]]);
            tempArray[numArray[i]] = minIndex;
        }   
    }
    cout  << "Min Index: " << minIndex;
}

int subArrayWithGivenSum(int numOfElements, int numArray[]){
    //take a look at the sliding window approach on gfg after doing vectors
    int sum; 
    cout << "Enter the Sum: " ; 
    cin >> sum;
    
    int startPointer = 0; 
    int endPointer = 0;
    int currentSum = 0;
    
    while(currentSum < sum && endPointer <=numOfElements){
        currentSum += numArray[endPointer];
        endPointer++;
    }
    while(currentSum > sum && startPointer <=numOfElements){
        currentSum -= numArray[startPointer];
        startPointer++;
    }
    if(currentSum != sum){
        cout << "No Such Sub-Array Found" << endl;
        return 0;
    }
    cout << "StartPointer: " << startPointer << " EndPointer: " << endPointer-1;
    return 0;
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
    subArrayWithGivenSum(numOfElements, numArray);
    cout << endl;
    return 0;
}


