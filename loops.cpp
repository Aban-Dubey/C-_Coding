#include <iostream>
using namespace std;

int main()
{
	int i;
	cout <<"For Loop:" <<endl;
	for (i=1;i<=5;i++)
	{
		cout <<i <<endl;
	}
	i=1;
	cout <<"While Loop:" <<endl;
	while(i<=5)
	{
		cout <<i <<endl;
		i++;
	}
	i=1;
	cout <<"Do While Loop:" <<endl;
	do
	{
		cout <<i <<endl;
		i++;
	}while(i<=5);
	return 0;
}