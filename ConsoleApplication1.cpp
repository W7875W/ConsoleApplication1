#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


int main()
{
	int a, b, c, d,max,min,main;
	cin >> a >> b >> c;
	//	   5    2    3 input
	//     2    3    5 output
	max = a;
	min = a;
	if (max < b && max < c) {
		if (b > c) {
			max = b;
		}
		else if (b < c) {
			max = c;
		}
		else if(b==c) {
			max = c;
		}
	}
	else if (max<b) {
		max = b;
	}
	else if (max < c) {
		max = c;
	}
	if (min > b && min > c) {
		if (b < c) {
			min = b;
		}
		else if (b > c) {
			min = c;
		}
		else if (b == c) { 
			min = b; 
		}
	}
	else if (min > b) {
		min = b;
	}
	else if (min > c) {
		min = c;
	}
	if ((c >= b && c <= a)||(c<=b&&c>=a)) {
		main = c;
	}
	else if ((b >= c && b <= a) || (b<=c && b>=a)) {
		main = b;
	}
	else if ((a >= b && a <= c) || (a<=b && a>=c)) {
		main = a;
	}
	cout << min<<" "<<main<< " " << max;
	return 0;
}