#include <iostream>
using namespace std;
int main()
{
	int ch1,ch2;
	cout <<"Rock Paper Scissor Game" <<endl;
	cout <<"Enter choice : Press 1 for ROCK... Press 2 for PAPER... Press 3 for SCISSORS..." <<endl;
	cout <<"Gamer #1:" <<endl;
	cin>>ch1;
	cout <<"Gamer #2:" <<endl;
	cin>>ch2;
	if(ch1==ch2)
	{
		cout <<"Tied :(" <<endl;
	}
	else if(ch1==1)
	{
		if(ch2==2)
		{
			cout<<"Gamer #2 wins!!" <<endl;
		}
		else
		{
			cout<<"Gamer #1 wins!!" <<endl;
		}
	}
	else if(ch1==2)
	{
		if(ch2==3)
		{
			cout<<"Gamer #2 wins!!" <<endl;
		}
		else
		{
			cout<<"Gamer #1 wins!!" <<endl;
		}
	}
	else
	{
		if(ch2==1)
		{
			cout<<"Gamer #2 wins!!" <<endl;
		}
		else
		{
			cout<<"Gamer #1 wins!!" <<endl;
		}
	}
	return 0;
}