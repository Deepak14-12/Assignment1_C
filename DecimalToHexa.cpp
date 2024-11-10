#include<iostream>
using namespace std;

int main(){
    int n, a[10],i=0,r;
    cout<<"enter decimal number: ";
    cin>>n;

    while (n!=0)
    {
        r = n%16;
        a[i] =  r;
        i++;
        n=n/16;
    }
     i--;
    while (i >= 0)
    { switch (a[i])
    {
    case 10: cout<<"A"; break;
    case 11: cout<<"B"; break;
    case 12: cout<<"C"; break;
    case 13: cout<<"D"; break;
    case 14: cout<<"E"; break;
    case 15: cout<<"F"; break;
    
    default: cout<<a[i]; break;
    }
        i--;
    }
    
    return 0;
}