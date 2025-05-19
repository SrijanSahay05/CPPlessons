#include <iostream>
#include <string>
using namespace std;

int main() {
    int wordCount, wordLimit;
	cin >> wordCount >> wordLimit;
	int currentLen = 0;
	for (int i = 0; i < wordCount; i++) {
		string input;
		cin >> input;
		currentLen += input.length();
		if (currentLen <= wordLimit) {
			if (i != 0) {
		        cout << ' ';
			}
			cout << input;
		}
		else {
			cout << "\n" << input;
			currentLen = input.length();
		}
	}
}
