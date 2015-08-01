#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int arr[5] = {0};
	char c;
	while (scanf("%c", &c))
	{
		switch ((int)c)
		{
		case 97:
			arr[0]++;
			break;
		case 101:
			arr[1]++;
			break;
		case 105:
			arr[2]++;
			break;
		case 111:
			arr[3]++;
			break;
		case 117:
			arr[4]++;
			break;
		default:
			break;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}




	system("pause");
	return 0;
}