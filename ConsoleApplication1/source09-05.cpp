#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int num;
	scanf("%d",&num);
	for (int i = 10; i < num; i++)
	{
		int t = i / 10;
		int u = i - t * 10;
		if (i%(u+t)==0)
		{
			printf("%d\n", i);
		}
	}




	system("pause");
	return 0;
}
