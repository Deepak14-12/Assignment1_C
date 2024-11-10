//read and print 3X3 matrix

#include<iostream>
using namespace std;

int main(){
 int arr[3][3]; 
 int r,c;
 cout<<"enter elements in 3X3 matrix: \n";
 for ( r = 0; r < 3; r++)
 {for ( c = 0; c < 3; c++)
 {
  cin>>arr[r][c];
 }
 }

 cout<<"elements in matrix are: \n";
  for ( r = 0; r < 3; r++)
 {for ( c = 0; c < 3; c++)
 {
  cout<<arr[r][c]<<" ";
 }cout<<"\n";
 }  
   
 return 0;
}