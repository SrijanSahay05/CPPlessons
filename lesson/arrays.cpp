#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; //an array named as luckyNumbers[20] that will contain integral elements. the parameter 20 is the length elements that can be stored in the array. 
    luckyNumbers[0] = 19; //changes the values at the specified index.
    cout << "Printing the element at index 0 in the luckyNumbers array = " << luckyNumbers[0] << endl; 
    
    cout << "The array size of luckyNumbers[] = " << sizeof(luckyNumbers) << endl ;
    cout << "The number of elements in array luckyNumbers  = " << sizeof(luckyNumbers)/sizeof(int) << endl;
    //printing first n number of elements of the array in new lines.
    string cars[5] = {"bmw", "audi", "hyundai", "tata", "volks wagen"};
    for (int i = 0; i < 3; i++){
        cout << cars[i] << endl;
    }

    //printing complete elements of the array in indivisual lines.
    for (string car : cars){ //the 
        cout << car << endl;
    }
    //printing complete elements of the array in indivisual lines.
    for (int luckynumber : luckyNumbers){ //the 
        cout << luckynumber << endl;
    }
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