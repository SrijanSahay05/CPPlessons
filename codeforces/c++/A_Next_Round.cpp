#include <iostream>
using namespace std; 

int main(){
    int n,k; 
    cin >> n,k; 
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int counter = -1; 
    for(int i=0; i<n; i++){
        if(arr[i]<arr[k]){
            counter++;
        }
    cout << counter;
    return 0;
    }
}