#include <iostream>
using namespace std; 
// #different code
int solve(){
    int gridSize;
    cin >> gridSize; 
    char grid[gridSize][4];
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<4; j++){
            cin >> grid[i][j];
        }
    }

    for(int i=gridSize; i>=0; i--){
        for(int j=0; j<4; j++){
            if(grid[i][j]=='#'){
                cout << j + 1 << " ";
            }
        }
    }
    cout << endl;
    return 0;
}

int main(){
    int n; 
    cin >> n; 
    for(int i=0; i<n; i++){
        solve();
    }
    return 0;
}