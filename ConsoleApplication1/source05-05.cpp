#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int k, arr[100];
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	};
	for (int i=k-1; i >= 0; i--)
	{
		cout << arr[i]<<" ";	
	};
	cout << endl;


	system("pause");
	return 0;
}
