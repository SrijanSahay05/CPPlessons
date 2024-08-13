#include <iostream>
using namespace std; 

void rename(string text){
    if (text.length()>10){
        cout<<text[0]<<text.length()-2<<text[text.length()-1]<<endl;
    }
    else{
        cout << text << endl;
    }
}    
int main(){
    int testCases; 
    string text;
    cin >> testCases ;
    for (int i=0; i<testCases; i++){
        cin >> text;
        rename(text);
    }
    return 0;
}