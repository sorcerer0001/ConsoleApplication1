#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int k,arr[100],a,b,c,d;
	a = b = c = d = 0;
	cin>>k;
	for (int i = 0; i < k; i++){
		cin >>arr[i];
	};
	for (int i = 0; i<k; i++)
	{
		if (arr[i] <= 18)
			a++;
		else if (arr[i] >= 19 && arr[i] <= 35)
			b++;
		else if (arr[i] >= 36 && arr[i] <= 60)
			c++;
		else
			d++;
	}
	double a1 = 1.0*(a * 100) / (k);
	double b1 = 1.0* (b * 100) / (k);
	double c1 = 1.0*(c * 100) / (k);
	double d1 = 1.0*(d * 100) / (k);
	printf("1-18: %.2lf%%\n", a1);
	printf("19-35: %.2lf%%\n", b1);
	printf("36-60: %.2lf%%\n", c1);
	printf("60-: %.2lf%%\n", d1);
/*	cout << "1-18: " << a1 << "%" << endl;*/
	system("pause");
	return 0;
}
