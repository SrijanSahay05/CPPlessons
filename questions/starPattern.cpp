#include <iostream>
using namespace std; 
int main() {
    // //rectangle patter
    // int row = 5;
    // int col = 4;
    // for(int i=1; i <=row; i++){
    //     for(int j=1; j<=col; j++){
    //         cout << "*" ; 
    //     }
    //     cout << endl;
    // }

    // //hollow rectangle
    // int row = 5;
    // int col = 4;
    // for(int i=1; i <=row; i++){
    //     for(int j=1; j<=col; j++){
    //         if(i==1||i==row||j==1||j==col){
    //             cout << "*" ;
    //         }
    //         else{
    //             cout << " ";
    //         } 
    //     }
    //     cout << endl;
    // }

    // //half pyramid 
    // //*
    // //**
    // //***
    // //****
    // //*****
    // int n = 5; 
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }

    // // half pyramid
    // // *****
    // // ****
    // // ***
    // // **
    // // *
    // int n = 5; 
    // for(int i=1; i <=5; i++){
    //     for(int j=n; j>=i; j--){
    //         cout << "*";
    //     }
    // cout << endl;
    // }

    // // half pyramid
    // //     *
    // //    **
    // //   ***
    // //  ****
    // // *****
    // int n = 5; 
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j>=n+1-i){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " "; 
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // number pyramid 
    // // 1
    // // 22
    // // 333
    // // 4444
    // // 55555
    // int n = 5; 
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }
    // // floyd's triangle
    // // 1
    // // 2 3
    // // 4 5 6
    // // 7 8 9 10
    // // 11 12 13 14 15 
    // int n=5; 
    // int counter = 1; 
    // for (int i=1; i <=n; i++){
    //     for (int j=1; j<=i; j++){
    //         cout << counter << " " ; 
    //         counter ++; 
    //     }
    //     cout << endl;
    // }

    // // Butterfly Pattern  
    // // *      *
    // // **    **
    // // ***  ***
    // // ********
    // // ********
    // // ***  ***
    // // **    **
    // // *      *
    // int n=4; 
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n*2; j++){
    //         if(j<=i||j>(2*n)-i){
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=n*2; j++){
    //         if(j<=i||j>(2*n)-i){
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // inverted number triangle 
    // // 1 2 3 4 5 
    // // 1 2 3 4 
    // // 1 2 3 
    // // 1 2 
    // // 1 
    // int n = 5; 
    // for(int i=1; i <= n; i++){
    //     for(int j=1; j<=(n+1)-i; j++){
    //         cout << j ;
    //     }
    //     cout << endl;
    // }

    // // 0-1 Pattern 
    // // 1
    // // 0 1
    // // 1 0 1 
    // // 0 1 0 1
    // // 1 0 1 0 1 
    // int n =5; 
    // for (int i=1; i <=n; i++){
    //     for(int j=1; j<=i; j++){
    //         if ((i+j)%2==0){
    //             cout << "1 " ;
    //         }
    //         else{
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // rhombus patter 
    // //     *****
    // //    *****
    // //   *****
    // //  *****
    // // *****
    // int n = 5; 
    // for(int i=1; i <= 5; i++){
    //     for (int j=1; j<=n-i; j++){
    //         cout << " ";
    //     }
    //     for (int j=1; j<=5; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Number Pattern 
    // //     1
    // //    1 2
    // //   1 2 3
    // //  1 2 3 4
    // // 1 2 3 4 5
    // int n = 5; 
    // for(int i = 1; i <= n; i++){
    //     for(int j=1; j<=n-i; j++){
    //     cout << " ";
    //     }
    //     for (int j=1; j<=i; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }   

    // // Palindromic Pattern 
    // //     1
    // //    212      
    // //   32123
    // //  4321234
    // // 543212345
    // int n = 5; 
    // for (int i=1; i <= n; i++){
    //     for (int j=1; j <= (n+1)-i; j++ ){
    //         cout << "  ";
    //     }
    //     for (int j=i; j>1; j--){
    //         cout << j << " ";
    //     }
    //     for (int j=1; j<=i; j++){
    //         cout << j << " " ;
    //     }
    //     cout << endl;
    // }

    // // Mirror Star Pattern
    // //       *
    // //     * * * 
    // //   * * * * * 
    // // * * * * * * * 
    // // * * * * * * *
    // //   * * * * *
    // //     * * * 
    // //       *
    // int n = 5; 
    // for (int i=1; i <=n; i++){
    //     for (int j=1; j<=(n+1)-i; j++){
    //         cout << "  ";
    //     }
    //     for (int j=1; j<=(i*2)-1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i=n; i >=1; i--){
    //     for (int j=1; j<=(n+1)-i; j++){
    //         cout << "  ";
    //     }
    //     for (int j=1; j<=(i*2)-1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // Zig-Zag Pattern 
    // // . . * . . . * . .
    // // . * . * . * . * .
    // // * . . . * . . . *
    // const int row = 3;
    // int n = 15; 
    // for (int i=1; i<=row; i++){
    //     for(int j=1; j<=n; j++){
    //         if((i+j)%4==0 || (i%2==0 && (i+j)%2==0)){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    return 0;
}