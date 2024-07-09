#include <iostream>

using namespace std; 

int main(){
    int n; 
    int* numArray = new int[n]; //dynamic allocation is used if the size of the array has to be taken as input. (might be to avoid segmentation fault)
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the " << i+1 << " value of array" << endl;
        cin >> numArray[i];
    }
    for(int i=0; i<n; i++){
        cout << numArray[i] << " "; 
    }
    return 0;
}