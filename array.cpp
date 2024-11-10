#include<iostream>
using namespace std;

int main(){
system("cls");
char ch[10]= {'D','E','E','P','A','K','\0'};   //\0 prevents from printing garbage values

for(int i = 0; i < 10; i++)
{   
    cout<<ch[i];
}

}