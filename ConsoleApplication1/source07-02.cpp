#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float PI = 3.14159;
	int h, r,n,f=20*1000;
	cin >> h >> r;
/*	a = floor(n - y / x);*/
	int v = PI*r*r*h;
	n = f/v + (f% v!= 0 ? 1 : 0);
/*	a = (a < 0) ? 0 : a;*/
	cout << n << endl;


	system("pause");
	return 0;
}
