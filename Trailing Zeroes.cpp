//Given an integer n, write a function that returns count of trailing zeroes in n!
#include<iostream>
using namespace std;
int func(int n)
{
 int count=0;
 int i;
 for( i=5; n/i >=1; i *=5)
      count += n/i;
 return count;	
}

int main()
{
  int n;
  cin>>n;
  int count=func(n);
  cout<<count;	
	return 0;
}
