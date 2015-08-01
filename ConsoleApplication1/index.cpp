#include<stdio.h>
#include<string.h>
int main()
{
	char c1[80], c2[80];
	int i, l1, l2, t;
	gets_s(c1);
	gets_s(c2);
	l1 = strlen(c1);
	l2 = strlen(c2);
	for (i = 0; i < l1; i++)
		if (c1[i] <= 'Z')
			c1[i] += 32;
	for (i = 0; i < l2; i++)
		if (c2[i] <= 'Z')
			c2[i] += 32;
	t = strcmp(c1, c2);
	if (t == 0)
		printf("=\n");
	else if (t > 0)
		printf(">\n");
	else if (t < 0)
		printf("<\n");
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