#include <iostream>
using namespace std;

bool triangle(int n)
{
	int i;
	int s=0;
	for(i=0;i<=n;i++) //Repeat till the number of pebbles.
	{
		s=s+i;
		if(s==n) //To check the triangle formation condition and return to exit the looping structure.
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int n1;
	cout <<"Enter the number of pebbles from:" <<endl;
	cin >>n1;
	if(triangle(n1)) //positive result
	{
		cout<<"Yes the triangle can be formed!";
	}
	else //negative result
	{
		cout<<"No the triangle can't be formed!!";
	}
}
