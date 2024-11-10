#include<iostream>
using namespace std;

int main(){
system("cls");

int arr[50] ,i, n;

x: cout<<"enter a limit to store element in array: ";
cin>>n;
if(n>50)
{cout<<"enter valid limit between 2 - 50";
goto x;
}
else{
cout<<"enter elements in array \n";
for( i = 0; i < n; i++)
{ 
    cin>>arr[i];
}

int max = arr[0]; int p = 0;

for( i = 0; i < n; i++)
{  if(max < arr[i] )
    max=arr[i];
    p=i;
    }

     cout<<"largest element is: "<<max<<"\n position of large element is: "<<++p;

}

return 0;

}