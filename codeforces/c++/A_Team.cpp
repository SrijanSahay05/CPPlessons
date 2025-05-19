#include <iostream>
using namespace std; 

int main(){
    int testCases, a, b, c;
    int count = 0; 
    cin >> testCases ; 
    for(int i =0; i<testCases; i++){
        cin >> a >> b >> c;
        if (a + b + c >=2){
            count++;
        }
    }
    cout << count << endl ;
    return 0;
}