#include<iostream>

using namespace std; 

void selectionSortAscending(int n, int numArray[]){
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(numArray[j] < numArray [i]){
                int buffer = numArray[j];
                numArray[j] = numArray[i];
                numArray[i] = buffer;
            }
        }
    }
}
void selectionSortDescending(int n, int numArray[]){
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(numArray[j] > numArray [i]){
                int buffer = numArray[j];
                numArray[j] = numArray[i];
                numArray[i] = buffer;
            }
        }
    }
}

void buubleSortAscending(int n, int numArray[]){
    
}
void arrayPrint(int n, int numArray[]){
    for (int i=0; i<n; i++){
        cout << numArray[i] <<",";
    }
}

int main(){
    int n; 
    int* numArray = new int[n];
    cout << "Enter the number of elements: " ;
    cin  >> n; 
    cout << endl << "Enter the values in  : ";
    for (int i=0; i<n; i++){
        cin >> numArray[i];
    }
    cout << "Original Array: ";
    arrayPrint(n, numArray);

    // selectionSortAscending(n, numArray);
    // cout << endl << "Asceding order sorted array: " ;
    // arrayPrint(n, numArray);

    // selectionSortDescending(n, numArray);
    // cout << endl << "Descending order sorted array:  ";
    // arrayPrint(n, numArray);


    return 0;
}