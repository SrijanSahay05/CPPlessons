#include<iostream>

using namespace std; 

int main(){
    int n; 
    int* numArray = new int[n];
    cout << "Enter the number of elements: " ;
    cin  >> n; 
    cout << endl << "Enter the values in  : ";
    for (int i=0; i<n; i++){
        cin >> numArray[i];
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(numArray[j] < numArray [i]){
                int buffer = numArray[j];
                numArray[j] = numArray[i];
                numArray[i] = buffer;
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << numArray[i] <<",";
    }
    return 0;
}