
#include<iostream>
using namespace std;

int main(){
 int arr[10][10]; 
 int r,c,m,n;
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

 cout<<"corners of matrix are: \n";
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
   {
    if(r==0 &&c==0)
  cout<<"top left corner: "<<arr[r][c]<<"\t";
  if(r==0 &&c==(n-1))
  cout<<"top right corner: "<<arr[r][c]<<"\t";
  if(r==(m-1) &&c==0)
  cout<<"bottom left corner: "<<arr[r][c]<<"\t"; 
  if(r==(m-1) &&c==(n-1))
  cout<<"bottom right corner: "<<arr[r][c]<<"\t";
 }cout<<"\n";
}
}
   
 return 0;
}