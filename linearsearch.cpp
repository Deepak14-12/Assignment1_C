//linear search................

#include<iostream>
using namespace std;

int main(){
system("cls");

int arr[50] ,i,s, n,p;

x: cout<<"enter a limit to store element in array: ";
cin>>n;
if(n>50)
{cout<<"enter valid limit between 1 - 50";
goto x;
}
else{
cout<<"enter elements in array \n";
for( i = 0; i < n; i++)
{ 
    cin>>arr[i];
}
int f= 0;
cout<<"enter an element for search in array: ";
cin>>s;
for( i = 0; i < n; i++)
{  if(s == arr[i] )
    f=1;
    p = i;
    break;
    }
      if(f==1)
     cout<<"fetched! element found.\n"<<"position: "<<++p;

}

return 0;

}