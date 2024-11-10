#include<iostream>
using namespace std;

int main(){
    int n, a[10],i=0,r;
    cout<<"enter decimal number: ";
    cin>>n;

    while (n!=0)
    {
        r = n%8;
        a[i] =  r;
        i++;
        n=n/8;
    }
     i--;
    while (i >= 0)
    {
        cout<<a[i];
        i--;
    }
    
    return 0;
}