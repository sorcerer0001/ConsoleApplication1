#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int ct(int st[], int m, int n){
	if (m>=5 || n>=5)
	{
		return 0;
	}
	int arr[]={0,1,2,3,4},arr_temp[25];
	arr[m]=n;
	arr[n]=m;
	for (int i = 0; i < 5; i++)
	{
		for(int k=0;k<5;k++){
			arr_temp[arr[i]*5+k]=st[i*5+k];
		}
	}
	for (int i = 0; i < 25; i++)
	{
		st[i]=arr_temp[i];
	}
	return 1;
}
int main()
{
	int st[25];
	int m, n;
	for (int i = 0; i < 25; i++)
	{
			cin >> st[i];
	}
	cin >> m >> n;
	int y=ct(st, m, n);
	if (y==0)
	{
		cout<< "error" << endl;
	}
	else{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << setw(4) << st[i*5+j];
			}
			cout << endl;
		}
	}

	return  0;
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
