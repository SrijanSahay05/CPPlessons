#include <iostream>
using namespace std;

int main() {
  long Num;
  cin >> Num;
  cout << Num << " ";
  while (Num != 1) {
    if (Num % 2 == 0) {
        Num = Num/2;
        cout << Num << " ";
    } else {
        Num = (Num*3) + 1;
        cout << Num << " ";
    }
  }
  cout << endl;
  return 0;
}
