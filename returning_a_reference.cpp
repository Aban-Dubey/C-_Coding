#include <iostream>
using namespace std;

int& max(int &m, int &n)
{
	return (m>n ? m:n);
}

int main()
{
	int m=44;
	int n=22;
	cout <<"M and N before function call = " <<m <<" " <<n <<endl;
	max(m,n)=55;
	cout <<"M and N after function call = " <<m <<" " <<n <<endl;
}