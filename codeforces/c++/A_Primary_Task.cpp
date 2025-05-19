#include <iostream>
using namespace std;
bool isImportantInteger(int a) {
    string str_a = to_string(a);
    if (str_a.length() > 2 && str_a.substr(0, 2) == "10") {
        if(str_a[2] == '0'){
            return false;
        }
        int remaining = stoi(str_a.substr(2));
        if (remaining >= 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        if (isImportantInteger(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}