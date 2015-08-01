#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int m, n, res=0;
	cin >> m >> n;
	m = (m - 1 < 0) ? 1 : m;
	n = (n +1>300 ) ? 299 : n;
	for (m; m < n+1; m++)
	{
/*		cout << m << endl;*/
		if (m%2)
		{
			res = m + res;
		}
	}
	cout << res << endl;
/*	system("pause");*/
	return 0;
}