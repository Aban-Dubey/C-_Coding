#include <iostream>
using namespace std;

int main()
{
	float total=100;
	float &sum=total; //reference variable for total
	cout <<total << "\n"; //both total and sum will give the same output
	cout <<sum << "\n";
	
	sum+=10; 
	cout <<total <<"\n"; //10 is added in sum but printing output will also give 110
	
	total+=10;
	cout <<sum; //10 is added to total but sum will also have the value 120
	return 0;
}