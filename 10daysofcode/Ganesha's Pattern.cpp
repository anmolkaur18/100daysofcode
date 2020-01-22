/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *


*/




#include<iostream>
using namespace std;
int main() {
int n,i,j;
cin>>n;
if(n>=5 && n%2!=0){

cout<<"*";
for(i=1; i<=(n-3)/2; i++)
     cout<<" ";
for(i=1; i<=(n+1)/2; i++)
     cout<<"*";
cout<<endl;

for(int rows=1; rows<=(n-3)/2; rows++)
{
	cout<<"*";
	for(i=1; i<=(n-3)/2 ; i++)
	     cout<<" ";
	cout<<"*";
	cout<<endl;
}

for(i=1; i<=n; i++)
     cout<<"*";
cout<<endl;
for(int rows = 1; rows<=(n-3)/2; rows++)
{
	for(i=1; i<=((n-3)/2)+1; i++)
	    cout<<" ";
	cout<<"*";
	for(i=1; i<=(n-3)/2; i++)
	    cout<<" ";
	cout<<"*"<<endl;
}

for(i=1; i<=(n+1)/2; i++)
     cout<<"*";
for(i=1; i<=(n-3)/2; i++)
     cout<<" ";
cout<<"*"<<endl;
}
	return 0;
}
