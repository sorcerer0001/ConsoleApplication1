#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int k, arr[100],max=0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	};
	for (int i = 0; i <k; i++)
	{
		max=arr[i]>max?arr[i]:max;
	};
	cout <<max<< endl;


	system("pause");
	return 0;
}
