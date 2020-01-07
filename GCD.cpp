/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.
*/

#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if(b==0)
	   return a;
	 return gcd(b,a%b);
}

int main() {
int a,b;
cin>>a>>b;
int n= gcd(a,b);
cout<<n;
	return 0;
}
