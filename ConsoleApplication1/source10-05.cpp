#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const int size = 100;
    int n, i, j, k, l, count = 0;
    int a[size][size];
    while (cin >> n){ 
        for (i = 0; i<n; ++i){
            for (j = 0; j<n; ++j){
                cin >> a[i][j];
            }
        }
        for (k = 1; k<n - 1; ++k){
            for (l = 1; l<n - 1; ++l){ 
                if (a[k - 1][l] - a[k][l] >= 50 && a[k + 1][l] - a[k][l] >= 50 && a[k][l - 1] - a[k][l] >= 50 && a[k][l + 1] - a[k][l] >= 50){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}