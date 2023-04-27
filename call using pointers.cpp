#include <iostream>
using namespace std;

float average(float* a, float* b)
{
	float av = (*a + *b)/2;
	return av;
}

int main()
{
	float m,n;
	cout << "Enter two numbers: " << endl;
	cin >> m >>n;
	float avg = average(&m,&n);
	cout << "There average is: " <<avg <<endl;
	return 0;
}