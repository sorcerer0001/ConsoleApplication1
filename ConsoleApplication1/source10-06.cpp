#include <iostream>   
using namespace std;  
int main(){  
    int n,l,i,an[1000];  
    int *p;  
    std::cin>>n>>l;  
    for(i = 0;i < n;i ++){  
        std::cin>>an[i];  
    }  
    p = an + n - l;  
    do{  
        std::cout<<*p<<" ";  
        p ++;  
        if(p > an + n - 1){  
            p = an;  
        }  
        if(p == an + n - l){  
            break;  
        }  
    }while(p <= an + n -1);  
    std::cout<<std::endl;  
    return 0;  
}  