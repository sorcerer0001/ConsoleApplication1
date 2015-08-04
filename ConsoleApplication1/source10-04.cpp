#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int ct(char st[], int m, int n){
	if (n >= 0 && n<5 && m >= 0 && m<5)
	{
	int arr[] = { 0, 1, 2, 3, 4 }, arr_temp[25];
	arr[m] = n;
	arr[n] = m;
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k<5; k++){
			arr_temp[arr[i] * 5 + k] = st[i * 5 + k];
		}
	}
	for (int i = 0; i < 25; i++)
	{
		st[i] = arr_temp[i];
	}
	return 1;
	}
	else{

		return 0;
	}


}
int main()
{
	char st[25];
	int m, n;
	for (int i = 0; i < 25; i++)
	{
		cin >> st[i];
	}
	cin >> m >> n;
	int y = ct(st, m, n);
	if (y == 0)
	{
		cout << "error" << endl;
	}
	else{
		for (int i = 0; i <5; i++)
		{
			/*cout << st[i * 5 + 0] << " " << st[i * 5 + 1] << " " << st[i * 5 + 2] << " " << st[i * 5 + 3] << " " << st[i * 5 + 4];
			cout << endl;

			
			*/
				for (int j = 0; j < 5; j++)
				{
					cout << setw(4) << st[i*5+j];
				}
				cout << endl;
			/*cout << setw(4) << st[i * 5 + 0] << setw(4) << st[i * 5 + 1] << setw(4) << st[i * 5 + 2] << setw(4) << st[i * 5 + 3] << setw(4) << st[i * 5 + 4];
			cout << endl;
			cout << setw(4) << st[i];
			if (i==4 || i==9 || i==14 || i==19)
			{
				cout << endl;
			}*/
		}cout << endl;
	}
	return  0;
}

