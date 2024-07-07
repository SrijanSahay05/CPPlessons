#include <iostream>
using namespace std; 
int main(){
    int n=10043521;
    bool check=0;
    for(int i=2; i<=(sqrt(n)); i++){
        if (n%i==0){
            cout << "Not Prime";
            check = 1;
            break;
        }
    }
    if(check==0){
        cout << "Prime";
    }
    return 0;
}