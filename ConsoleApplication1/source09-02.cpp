#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,arr[100];
	double l = 60 / 1.8;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	};
	for (int i = 0; i < n; i++)
	{
		if (arr[i]/1.2<(l+50))
		{
			cout << "Walk" << endl;
		}
		else if (arr[i] / 1.2==(l + 50))
		{
			cout << "All" << endl;
		}
		else
		{
			cout << "Bike" << endl;
		};
	}

	system("pause");
	return 0;
}
