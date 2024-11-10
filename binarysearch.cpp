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
cout<<"enter elements in array in ascending order\n";
for( i = 0; i < n; i++)
{ 
    cin>>arr[i];
}

//sorting array
for( i = 0; i < n; i++)
{ 
  for( int j = 0; j < n; j++){
    if (arr[i] >arr[j])
    {int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
 }
} // sorting ends

int f= 0, p;
int mid, low =0, high = n-1;
cout<<"enter an element for search in array: ";
cin>>s;
while(low <= high)
{  mid = (low+high)/2;
    if( arr[mid] == s )
    {
    f=1;
    p=mid;
    break;
    }
    }
      if(s>arr[mid]){
        low = mid+1;
      }else 
      {high = mid-1;}
     
     if (f==1)
     {
     cout<<"Fetched! Element Found at position.\n"<<++p;
     }
     else{
        cout<<" Element Not Found!.\n";
     }
     

}

return 0;

}