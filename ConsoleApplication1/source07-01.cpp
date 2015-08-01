#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n, x, y,a;
	cin >> n >> x >> y;
/*	a = floor(n - y / x);*/

	a = n - y / x - (y%x !=0 ? 1 : 0);
	a = (a < 0) ? 0 : a;
	cout << a << endl;


	system("pause");
	return 0;
}
