#include<iostream>
#include<stdlib.h>
using namespace std;

int getNumBIN1(int num,int BIN1){
	if (num==0)
	{
		return	BIN1;
	}
	if (num%2)
	{
		BIN1++;
	}
	getNumBIN1(num / 2, BIN1);
}

int main()
{
	int k,arrN[100];
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> arrN[i];
	}
	for (int i = 0; i < k; i++)
	{
		cout << getNumBIN1(arrN[i], 0) << endl;
	}
	system("pause");
	return 0;
}