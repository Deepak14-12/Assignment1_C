
#include<iostream>
using namespace std;

int main(){
 int a[10][10]; 
 int b[10][10]; 
 int result[2][2];
 int m,n,r,c,p,q;
 cout<<"enter  number of rows & columns for first matrix: ";
 cin>>m>>n;
 cout<<"enter elements in first "<<m<<"x"<<n<<" matrix: \n";
 for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 {
  cin>>a[r][c];
 }
 }

cout<<"enter  number of rows & columns for second matrix: ";
 cin>>p>>q;
 cout<<"enter elements in second "<<p<<"x"<<q<<" matrix: \n";
 for ( r = 0; r < p; r++)
 {for ( c = 0; c < q; c++)
 {
  cin>>b[r][c];
 }
 }

if
 (n == p) {
 cout<<"elements  in first matrix are: \n";
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 {
  cout<<a[r][c]<<" ";
 }cout<<"\n";
 }

 cout<<"elements  in second matrix are: \n";
  for ( r = 0; r < p; r++)
 {for ( c = 0; c < q; c++)
 {
  cout<<b[r][c]<<" ";
 }cout<<"\n";
 }  

//Multiplication
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 { result[r][c] = 0; 
  for (int k = 0; k < n; k++)
 {
    result[r][c]+= (a[r][k] * b[k][c]);
 }
 
 }
}

cout<<"Multiplication of both matrix are: \n";
  for ( r = 0; r < m; r++)
 {for ( c = 0; c < n; c++)
 { cout<<result[r][c]<<" ";
 }cout<<endl;
}
} 
else
 {
        cout <<"Matrices cannot be multiplied due to incompatible dimensions.\n";
    }
 
return 0;
}
