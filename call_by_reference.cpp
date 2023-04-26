#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int m,n;
	cout <<"Enter first number: " <<"\n";
	cin >>m;
	cout <<"Enter second number: " <<"\n";
	cin >>n;
	cout <<"Before swapping numbers are: " <<m << " "<<n <<"\n";
	swap(m,n);
	cout <<"After swapping numbers are: " <<m <<" " <<n;
}