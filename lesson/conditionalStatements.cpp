#include <iostream>

using namespace std;
void heightAndGender(){
    bool isMale = 0;
    bool isTall = 0;
    if (isMale && isTall){                                  // && operator : proceed if only booth the statements are true
        cout << "The user is male and is tall" << endl;     // || operator : proceed if any one of the condition is true
                                                            // !  operator : not operator
    }
    else if (isMale && !isTall)
    {
        cout << "The user is male and short" << endl;
    }
    else if (!isMale && isTall){ 
        cout << "The user is female and tall" << endl;
    }
    else{
        cout << "The user is female and short " << endl;
    }
}

int getMax(int num1, int num2) {
    int result;
    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }
    return result;
}

int main () {
    // heightAndGender();
    cout << getMax(12,10);
    return 0;
}