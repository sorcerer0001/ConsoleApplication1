#include<stdio.h>

using namespace std;
int main()
{
	char st[500];
	int uc = 0, dc = 0, k = 0, arr[2];
	gets(st);
	for (int i = 0; st[i] != '\0'; i++){
		if ((int)st[i] != 32 && k == 0)
		{
			uc = i;
			k = 1;
		}
		if ((int)st[i] == 32 && k == 1)
		{
			dc = i;
			k = 0;
			if (dc - uc>arr[1])
			{
				arr[0] = uc;
				arr[1] = dc - uc;
			}
		}
	}
	for (int i = arr[0]; i < arr[1]; i++)
	{
		printf("%c",st[i]);
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
