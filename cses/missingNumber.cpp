#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* numarr = new int[n];
    int* missarr = new int[n];
    for(int i=1; i<n; i++){
        cin >> numarr[i];
        missarr[i] = -1;
    }
    for(int i=1; i<n; i++){
        missarr[numarr[i]] = 1;
    }
    for(int i=1; i<n; i++){
        if (missarr[i]==-1){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
