#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int years(int n, int k){
	int p = 200;
	double k1 =1+ k / 100.00;
	for (int i = 1; i < 21; i++)
	{
		if (n*i> p){
			cout << i << endl;
			return	i;
		};
		p = p*k1;
	};
	cout << "Impossible" << endl;
}

int main()
{
	int n, k;
	while (scanf("%d%d", &n, &k) != EOF)
	{
		years(n, k);
	}



	system("pause");
	return 0;
}