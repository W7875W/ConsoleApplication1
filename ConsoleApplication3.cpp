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
	int a, b, c, d, e;
	int max, min, main1, main2, main3;
	int x = 0, y = 0, u = 0;
	int xx = 0, yy = 0, uu = 0;
	int m = 0, n = 0;
	int mm = 0, nn = 0;
	cin >> a >> b >> c >> d >> e;
	//5 2 3 3 4 input
	//5 4 3 3 2 output
	max = a;
	min = a;
	n++;
	if (max < a) {
		nn = n;
		max = a;
	}
	n++;
	if (max < b) {
		nn = n;
		max = b;
	}
	n++;
	if (max < c) {
		nn = n;
		max = c;
	}
	n++;
	if (max < d) {
		nn = n;
		max = d;
	}
	n++;
	if (max < e) {
		nn = n;
		max = e;
	}
	//
	m++;
	if (m != nn) {
		if (min > a) {
			mm = m;
			min = a;
		}
	}
	m++;
	if (m != nn) {
		if (min > b) {
			mm = m;
			min = b;
		}
	}
	m++;
	if (m != nn) {
		if (min > c) {
			mm = m;
			min = c;
		}
	}
	m++;
	if (m != nn) {
		if (min > d) {
			mm = m;
			min = d;
		}
	}
	m++;
	if (m != nn) {
		if (min > e) {
			mm = m;
			min = e;
		}
	}
	//
	u++;
	if (u != nn && u != mm) {
		if (a<max && a>min) {
			main1 = a;
			uu = u;
		}
	}
	u++;
	if (u != nn && u != mm) {
		if (b<max && b>min) {
			main1 = b;
			uu = u;
		}
	}
	u++;
	if (u != nn && u != mm) {
		if (c<max && c>min) {
			main1 = c;
			uu = u;
		}
	}
	u++;
	if (u != nn && u != mm) {
		if (d<max && d>min) {
			main1 = d;
			uu = u;
		}
	}
	u++;
	if (u != nn && u != mm) {
		if (e<max && e>min) {
			main1 = e;
			uu = u;
		}
	}
	//
	x++;
	if (x != uu && x != nn && x != mm) {
		if ((a<=max && a>=min && a <= main1)|| (a<=max && a>=min && a >= main1)) {
			xx = x;
			main2 = a;
		}
	}
	x++;
	if (x != uu && x != nn && x != mm) {
		if ((b<=max && b>=min && b <= main1)|| (b<=max && b>=min && b >= main1)) {
			xx = x;
			main2 = b;
		}
	}
	x++;
	if (x != uu && x != nn && x != mm) {
		if ((c<=max && c>=min && c <= main1) || (c<=max && c>=min && c >= main1)) {
			xx = x;
			main2 = c;
		}
	}
	x++;
	if (x != uu && x != nn && x != mm) {
		if ((d<=max && d>=min && d <= main1) || (d<=max && d>=min && d >= main1)) {
			xx = x;
			main2 = d;
		}
	}
	x++;
	if (x != uu && x != nn && x != mm) {
		if ((e<=max && e>=min && e <= main1) || (e<=max && b>=min && e >= main1)) {
			xx = x;
			main2 = e;
		}
	}
	//
	y++;
	if (y != uu && y != nn && y != mm && y!=xx) {
		if ((a<=max && a>=min && a >= main1)|| (a<=max && a>=min && a <= main1)) {
			yy = y;
			main3 = a;
		}
	}
	y++;
	if (y != uu && y != nn && y != mm && y != xx) {
		if ((b<=max && b>=min && b >= main1) || (b<=max && b>=min && b <= main1)) {
			yy = y;
			main3 = b;
		}
	}
	y++;
	if (y != uu && y != nn && y != mm && y != xx) {
		if ((c<=max && c>=min && c >= main1) || (c<=max && c>=min && c <= main1)) {
			yy = y;
			main3 = c;
		}
	}
	y++;
	if (y != uu && y != nn && y != mm && y != xx) {
		if ((d<=max && d>=min && d >= main1) || (d<=max && d>=min && d <= main1)) {
			yy = y;
			main3 = d;
		}
	}
	y++;
	if (y != uu && y != nn && y != mm && y != xx) {
		if ((e<=max && e>=min && e >= main1) || (e<=max && e>=min && e <= main1)) {
			yy = y;
			main3 = e;
		}
	}
	//
	//cout << max << " " << main1<<" "<<main2<<" "<<main3 << " " << min;
	//
	int aaa = main1, bbb = main2, ccc = main3;
	int xxx = aaa;
	int yyy = aaa;
	int qwerty;
	if (xxx < bbb && x < ccc) {
		if (bbb > ccc) {
			xxx = bbb;
		}
		else if (bbb < ccc) {
			xxx = ccc;
		}
		else if (bbb == ccc) {
			xxx = ccc;
		}
	}
	else if (xxx < bbb) {
		xxx = bbb;
	}
	else if (xxx < ccc) {
		xxx = ccc;
	}
	if (yyy > bbb && yyy > ccc) {
		if (bbb < ccc) {
			yyy = bbb;
		}
		else if (bbb > ccc) {
			yyy = ccc;
		}
		else if (bbb == ccc) {
			yyy = bbb;
		}
	}
	else if (yyy > bbb) {
		yyy = bbb;
	}
	else if (yyy > ccc) {
		yyy = ccc;
	}
	if ((ccc >= bbb && ccc <= aaa) || (ccc <= bbb && ccc >= aaa)) {
		qwerty = ccc;
	}
	else if ((bbb >= ccc && bbb <= aaa) || (bbb <= ccc && bbb >= aaa)) {
		qwerty = bbb;
	}
	else if ((aaa >= bbb && aaa <= ccc) || (aaa <= bbb && aaa >= ccc)) {
		qwerty = aaa;
	}
	cout<<max<<" " << xxx << " " << qwerty << " " << yyy<<" "<<min;

	return 0;
}