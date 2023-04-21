#include <iostream>
using namespace std;

int vote_eligibility(int age)
{
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a;
	int v;
	cout <<"Enter your age in years: ";
	cin >>a;
	if(vote_eligibility(a))
	{
		cout<<"You can vote!";
	}
	else
	{
		cout<<"You can't vote!";
	}
	return 0;
}