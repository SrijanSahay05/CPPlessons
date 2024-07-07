#include <iostream>

using namespace std; 

int main(){

    int numberGrid[3][3]= {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9},         
                        };
    int row, col; 
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            cout<< numberGrid[row][col]<<" " ;
    }
        cout << endl;
    }

    return 0;
}