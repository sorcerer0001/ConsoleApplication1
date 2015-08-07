#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
 
main()
{
 int n;
 double *x,*y;
 int i,j;
 double max=0;
 
 cin>>n;
 x=new double[n];
 y=new double[n];
 for(i=0;i<n;i++)
  cin>>x[i]>>y[i];

 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   double temp=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
   if(max<temp) max=temp;
  }
 }

 cout <<setiosflags(ios::fixed); 
 cout<< setprecision(4) <<sqrt(max)<<endl;

 delete []x;
 delete []y;
}
