#include<iostream>

using namespace std; 
//SELECTION SORT
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
//BUBBLE SORT
void bubbleSortAscending(int n, int numArray[]){
    int counter = 1;
    while (counter < n-1){
        for(int i=0; i<n-counter;i++){
            if(numArray[i]>numArray[i+1]){
                int temp = numArray[i];
                numArray[i] = numArray[i+1];
                numArray[i+1] = temp;
            }
        }
        counter++;
    }
}
void bubbleSortDescending(int n, int numArray[]){
    int counter = 1;
    while (counter < n-1){
        for(int i=0; i<n-counter;i++){
            if(numArray[i]<numArray[i+1]){
                int temp = numArray[i];
                numArray[i] = numArray[i+1];
                numArray[i+1] = temp;
            }
        }
        counter++;
    }
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
    bubbleSortAscending(n, numArray);
    cout << endl << "Asceding order sorted array: " ;
    arrayPrint(n, numArray);

    // selectionSortDescending(n, numArray);
    bubbleSortDescending(n, numArray);
    cout << endl << "Descending order sorted array:  ";
    arrayPrint(n, numArray);


    return 0;
}