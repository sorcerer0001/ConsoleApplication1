#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int arr[6],sum=0;
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	};
	for (int i = 1; i < 6; i++)
	{
		if (arr[0]>arr[i])
		{
			sum += arr[i];
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}