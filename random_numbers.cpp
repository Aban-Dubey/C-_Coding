#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int min,max,r,range;
	cout <<"Generating random numbers:-" <<endl;
	cout <<"Enter the range: Minimum and Maximum :" <<endl;
	cin >>min >>max;
	range = max-min+1;
	unsigned seed = time(NULL);
	srand(seed);
	cout <<"seed = " <<seed <<endl;
	for(int i=0;i<10;i++)
	{
		r = rand()/100%range+min;
		cout<<r <<" ";
	}
}