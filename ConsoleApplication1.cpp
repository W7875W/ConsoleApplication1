#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	/*
	string s, s2 = "q";
	cin >> s;
	s2 = s2 + s;
	cout << s2;
	*/
	
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
}













	/*
	string s;
	char x='!';
	char y = '))';
	getline(cin, s);
	for (auto c : s) {
		cout << c;
		if (c == x) {
			cout << y;
		}
	}
	*/
	/*
	int num = 1;
	string s;
	getline(cin, s);
	for (auto c : s) {
		cout << c;
		if (c == ' ') {
			num++;
			cout << endl;
			cout << num << ".";
		}
	}
	*/


























/*
int n, m;
cin >> n >> m;
int a[100][100];
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> a[i][j];
	}
}
int k, l;
cin >> k >> l;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		if (i >= k && j == l) {
			cout << a[i][j] << " ";
			cout << a[i][j - l] << " ";
		}
		else if (i>=k && j > l) {
			cout << a[i][j] << " ";
		}
		else if (i<k){ cout << a[i][j] << " "; }
	}
	cout << endl;
}
*/
/*
if (i == j + 1) {
	a[i][j] = 1;
}
else if (i == j + 2) {
	a[i][j] = 2;
}
else if (i == j + 3) {
	a[i][j] = 3;
}
else if (i == j + 4) {
	a[i][j] = 4;
}
else if (i == j - 1) {
	a[i][j] = 1;
}
else if (i == j - 2) {
	a[i][j] = 2;
}
else if (i == j - 3) {
	a[i][j] = 3;
}
else if (i == j - 4) {
	a[i][j] = 4;
}*/

/*if (z < a[i][j]) {
	z = a[i][j];
	if (x == 0 && y == 0) {
		x = i;
		y = j;
	}
	else if (i < x) {
		x = i;
		y = j;
	}
	else if (j < y) {
		x = i;
		y = j;
	}
}*/
/*
int x,y,z,i=0;
cin >> x;
y = x;
z = 0;
//1 2 2 1
//
//0 y z x
while (x!=0) {
	//if (z <= x) { z = 0; }
	if (x > y) {
		z = x;
	}
	else if (z>x && z>y) {
		i++;
		y = x;
		z = 0;
	}
	y = x;
	cin >>x;
}
cout << i;
//x>y=z
//y>x&&y>z
//z>x i++//x>y z=x;*/