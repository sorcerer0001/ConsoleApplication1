#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int temp;
    int * a;
    a=new int [10001];
    cin>>temp;
    while(temp!=0)
    {
            for(int i=0;i<temp;i++)
            cin>>a[i];
        sort(a,a+temp);
        if(temp%2==1)
            cout<<a[(temp-1)/2]<<endl;
        else
            cout<<(int)(floor((a[(temp-1)/2]+a[(temp+1)/2])/2))<<endl;
        cin>>temp;
    }

    return 0;
}