#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int k,i1=0,i5=0,i10=0;
	int arr[100];
	cin >> k;
	for (int i = 0; i <= k-1; i++)
	{
		cin >> arr[i];
	};
/*	cout << arr[0]<<arr[1] << endl;*/
	for (int i = 0; i <= k-1; i++)
	{
		if (arr[i]==1)
		{
			i1++;
		}
		else if (arr[i] == 5)
		{
			i5++;
		}
		else if (arr[i]==10)
		{
			i10++;
		}
	}
	cout << i1 << endl;
	cout << i5 << endl;
	cout << i10 << endl;

/*	system("pause");*/
	return 0;
}