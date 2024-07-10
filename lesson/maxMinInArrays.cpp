#include <iostream>
#include <climits>

using namespace std; 

int main(){
    int n; 
    int numMax = INT_MIN; 
    int numMin = INT_MAX;
    int* numArray = new int[n]; //dynamic allocation is used if the size of the array has to be taken as input. (might be to avoid segmentation fault)
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> numArray[i];
    }
    for(int i=0; i<n; i++){
        if (numArray[i]>numMax){
            numMax = numArray[i];
        }
        if (numArray[i]<numMin){
            numMin = numArray[i];
        }
    }
    cout << "Max: " << numMax << endl;
    cout << "Min: " << numMin << endl; 
    return 0;
}