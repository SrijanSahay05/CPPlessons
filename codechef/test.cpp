#include <iostream>
using namespace std;

int main() {
  int testcase;
  int billAmount;
  cin >> testcase;
  while (testcase--) {
    cin >> billAmount;
    if (billAmount <= 100) {
      cout << billAmount << endl;
    } else if (billAmount > 100 && billAmount <= 1000) {
      cout << billAmount - 25 << endl;
    } else if (billAmount > 1000 && billAmount <= 5000) {
      cout << billAmount - 100 << endl;
    } else if (billAmount > 5000) {
      cout << billAmount - 500 << endl;
    }
  }
}
