#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  string words[n];
  for (int i = 0; i < n; i++) {
    cin >> words[i];
  }
  words[n+1] = " ";
  for (int i = 0; i < n; i++) {
    int senlen = words[i].size();

    if (senlen <= k) {
      cout << words[i] << " ";
      senlen = senlen + words[i + 1].size();

    }

    else {
      cout << "\n";
      senlen = 0;
      i--;
    }
  }
}
hello my name is Bessie and this is my essay
5     2   4   2   6     3   4     2  2  5

hello my : 7
name is  : 6
Bessie   : 6
and this : 7
is my    : 4
essay    : 5
