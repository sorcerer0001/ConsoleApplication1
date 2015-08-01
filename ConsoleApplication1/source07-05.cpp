#include<iostream>
#include<stdlib.h>
using namespace std;

int getNum(int num,int step=1){
	if (num/step<1)
	{
		return 0;
	}
	int u=getNum(num, step * 10);
	int e = (num-u*step*10) / step;
	cout << e << endl;
	return num / step;
};

int main()
{
	int num;
	cin >> num;
	getNum(num);

	system("pause");
	return 0;
}
