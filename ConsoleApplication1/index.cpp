#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int arr[5] = {0};
	char c;
	/*while ((c=cin.get())!=EOF)*/
	/*while (cin>>c)*/
	while (cin.get(c))
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
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;



	system("pause");
	return 0;
}

/*
namespace config{
	int arr1[] = {20,3,5,7,9,50,22};
	int count = 6;
	bool MoM = 0;
	int M=arr1[count];
}


namespace Frbrs_stdfun{
	int getMoM(int *arr, int count, bool MoM, int M){
		if (count - 1>0)
		{
			count -= 1;
			if (MoM)
			{
				M = M > arr[count] ? M : arr[count];
			}
			else
			{
				M = M < arr[count] ? M : arr[count];
			}
			return getMoM(arr, count, MoM, M);
		}
		else
		{
			return M;
		}
	}
}


using namespace config;
int main(int argc, char const *argv[])
{
	int result=Frbrs_stdfun::getMoM(arr1,config::count, MoM,M);
	cout << result << endl;

	system("pause");
	return 0;
}*/