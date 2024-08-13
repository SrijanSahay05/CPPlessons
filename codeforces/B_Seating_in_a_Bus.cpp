#include <iostream>
using namespace std; 
int run(){
int numPassenger; 
    int* seats = new int[numPassenger];
    cin >> numPassenger;
    for(int i=0; i<numPassenger; i++){
        cin >> seats[i];
    }
    for(int i=1; i<numPassenger; i++){
        for (int j=0; j<i; j++){
            int works = 0;
            // cout << i << " : " << seats[i] << " || " << j << " : " << seats[j] << endl; 
            if(seats[i] == seats[j]+1 || seats[i] == seats[j]-1){
                // cout << "This works for =>" << i << " : " << seats[i] << " || " << j << " : " << seats[j] << endl;
                // works = 1;
                break;
            }
            if (i-j==1 && works == 0){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
int main(){
    int testCases; 
    cin >> testCases; 
    for (int i=0; i<testCases; i++){
        run();
    }
}