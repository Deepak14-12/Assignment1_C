#include<iostream>
using namespace std;

int main(){
    int n, a[10],idx,i;
    a: cout<<"enter limit of array element between 1-10\n";
    cin>>n;
    if (n>10)
    {
        cout<<"enter valid limit \n";
        goto a;

    }else{
     cout<<"enter elements in array: \n";
     for (  i = 0; i < n; i++)
     {
        cin>>a[i];
        }
     
     cout<<"elements of array are: ";
     for (int i = 0; i < n; i++)
     {
        cout<<a[i]<<" ";
        }
     
     b: cout<<"\nenter a index of element to delete: ";
        cin>>idx;
        if (idx > n)
        {
            cout<<"\n inter valid index \n";
            goto b;
        }else
        {
            for (i = idx; i <= n-1; i++)
            { 
                a[i] = a[i+1];
            }
            cout<<"after deletion of element\n";
            for ( i = 0; i <= n-1; i++)
            {
                cout<<a[i]<<" ";
            }
        }
        }
    return 0;
    }
    
