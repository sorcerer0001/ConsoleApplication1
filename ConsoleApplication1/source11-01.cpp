#include <iostream>
 
using namespace std;
 
int main()
{
                int n;
                cin >> n;
 
                if(n % 4 == 0)
                {
                                if(n % 100 == 0 && n % 400 != 0)
                                                cout << "N\n";
                                else if(n % 3200 == 0)
                                                cout << "N\n";
                                else
                                                cout << "Y\n";
                }
                else
                                cout << "N\n";
                return 0;
}
