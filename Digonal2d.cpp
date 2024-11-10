//diagonal

#include<iostream>
using namespace std;

int main(){
 int arr[10][10]; 
 int m,n,r,c;
 a:cout<<"enter same number of rows & columns for matrix: ";
 cin>>m>>n;
 if (m!=n){
goto a;}
else{
 cout<<"enter elements in "<<m<<"x"<<n<<" matrix: \n";
 for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 {
  cin>>arr[r][c];
 }
 }

 cout<<"elements in matrix are: \n";
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 {
  cout<<arr[r][c]<<" ";
 }cout<<"\n";
 }  
//diagonal logic 
 cout<<"Diagonal in matrix are: \n";
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 {if(r==c)
  cout<<arr[r][c]<<"\t";
 }cout<<"\n";
}

// for ( r = 0; i <m; r++)
// {
//     cout<<a[r][r]<<" ";
// }cout<<"\n";
}
 return 0;
}