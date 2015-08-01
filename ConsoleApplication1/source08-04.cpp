#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


void funCu(int num,int k=0){
	int n = 0, arr[6] = {100,50,20,10,5,1};
	if (k>5)
	{
		return;
	}
	while (num>=arr[k])
	{
		n++;
		num -=arr[k];
	}
	cout<<n<<endl;
	funCu(num, k + 1);
};


int main()
{
	int num;
	cin >> num;
	funCu(num);

	system("pause");
	return 0;
}