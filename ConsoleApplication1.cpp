#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	//word palindrome
	string s;
	int i = 0,n=0;
	getline(cin, s);
	for (auto c : s) {
		i++;
		//cout << c;
	}
	/*
	for (int j = i-1; j >= 0; j--) {
		//cout << s[j];
		for (auto c : s) {
			//cout << c;
			if (s[j] == c) {
				n++;
			}
		}
	}
	*/
	for (int j = i - 1,k=0; j >= 0; j--,k++) {
		//cout << s[j];
			//cout << c;
		if (s[j] == s[k]) {
			n++;
		}

	}
	if (i == n) {
		cout << "yes";
	}
	else { cout << "no"; }
	return 0;
}
