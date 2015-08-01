#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;



void InsertionSort(int input[], int len,int n)
{
	int i, j, temp;
	for (i = 1; i < len; i++)
	{
		temp = input[i];  
		for (j = i - 1; j>-1 && input[j] > temp; j--) 
		{
			input[j + 1] = input[j]; 
			input[j] = temp;
		}
	}
/*	for (int i = 0; i < len; i++)
	{
		cout << input[i] << endl;	
	}*/
	cout << input[len-n] << endl;
}


int main()
{
	int k,n,arr[100];
	cin>>k;
	cin >> n;
	for (int i = 0; i < k; i++)
	cin >> arr[i];
	InsertionSort(arr, k, n);


	system("pause");
	return 0;
}
