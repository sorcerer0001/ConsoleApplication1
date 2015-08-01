#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int arr[5] = {0},k=0;
	char c[80];
	/*while ((c=cin.get())!=EOF)*/
	/*while (cin>>c)*/
	/*while ((c[k]=cin.get())!=EOF)*/
	while((c[k] = cin.get())!= EOF)
	{
		
		switch ((int)c[k])
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
		k++;

	}
	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;



	system("pause");
	return 0;
}
