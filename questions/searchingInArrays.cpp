#include <iostream>

using namespace std; 
// linear search : O(n) linear time complexity
bool keyCheck(int key, int arrayValue){
    if(key == arrayValue){
        return true;
    }
    return false;
}
void linearSearch(){
    int n; 
    int key;
    bool notfound = true;
    int* numArray = new int[n];
    cout << "Enter the Number of Elements: " ;
    cin >> n; 
    cout << "Enter the values: " ;
    for(int i=0; i<n; i++){
        cin >> numArray[i];
    }
    cout<< "Enter the key to search: " ;
    cin >> key ;
    for(int i=0; i<n; i++){
        if(keyCheck(key, numArray[i])){
            cout << "Key Postion: " << i+1 <<" & Key Index: " << i << endl;
            notfound = false; 
        }
    }
    if(notfound){
        cout << "NO MATCH " <<endl;
    }
}
int main(){
    linearSearch();
    return 0;
}

//binary search (faster than linear) ##ARRAYS NEED TO BE SORTED 
