#include "Time.h"
#include<iostream>

using namespace std;

int main()
{
	Time::Triad t1(1, 2, 3), t2(7, 4, 8);
	cin >> t1 >> t2;
	cout << t1 << t2;
	bool t = t1 > t2;
	cout << "t1 > t2 = " << t << endl << endl;

	Time a(1, 2, 3), b(4, 6, 2);
	cin >> a;
	cout << "a    " << a;
	cout << "++a  " << ++a;
	cout << "--a  " << --a;
	cout << "a--  " << a--;
	cout << "a    " << a;
	cout << "a++  " << a++;
	cout << "a    " << a << endl;

	t = a == b;
	cout << "a == b    " << t << endl;
	t = a > b;
	cout << "a > b     " << t << endl;
	t = a < b;
	cout << "a < b     " << t << endl;

	

	return 0;
}
