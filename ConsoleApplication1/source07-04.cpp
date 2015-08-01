#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[6], i;
	for (i = 0; i < 6; i++)
		cin >> arr[i];
	int mine = 100, maxo = 0;
	for (i = 0; i < 6; i++) {
		if (arr[i] % 2) {
			maxo = arr[i]>maxo ? arr[i] : maxo;
		}
		else{
			mine = arr[i]<mine ? arr[i] : mine;
		};
	};
	cout << abs(maxo-mine) << endl;
	return 0;
}