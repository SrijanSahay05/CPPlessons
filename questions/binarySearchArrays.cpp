#include <iostream>
using namespace std; 
//Binary Search uses less time complexity but needs the arrays to be sorted.

int binarySearch(int n, int numArray[], int key){
    int startIndex = 0;
    int endIndex = n; 
    while (startIndex <= endIndex){
        int mid = (startIndex+endIndex)/2;
        if(numArray[mid]==key){
            return mid;
        }
        else if(numArray[mid] > key){ //assuming arrays are in ascending order
            endIndex = mid - 1;
        }
        else {
            endIndex = mid + 1;
        }
    }
    return -1;
    
}

int linearSearch (int n, int numArray[], int key){
    for(int i=0; i<n; i++){
        if(numArray[i]==key){
            return i;
        }
    }
    return -1;

    return 0;
}
int main(){
    int n; 
    int key; 
    int* numArray = new int[n];
    cout << "Enter the number of elements: " ;
    cin  >> n; 
    cout << endl << "Enter the values in ascending order (if binary search) : ";
    for (int i=0; i<n; i++){
        cin >> numArray[i];
    }
    cout << "Enter the key : " ;
    cin >> key;
    cout << "The Index of Key : " << binarySearch(n, numArray, key) << endl;
    // cout << "The Index of Key : " << linearSearch(n, numArray, key);
    return 0;
}