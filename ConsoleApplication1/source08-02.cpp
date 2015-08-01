#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int k,arr[7]={101,95,90,85,80,70,60};
	cin>>k;
	for (int i = 0; i < 6; i++){
		if (k<arr[i] && k>arr[i+1])
		{
			cout<<i+1<<endl;
			break;
		}
		else if (k<arr[6])
		{
			cout <<7 << endl;
			break;
		};
	};

	system("pause");
	return 0;
}