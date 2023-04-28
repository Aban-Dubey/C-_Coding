#include <iostream>
using namespace std;

int main()
{
	const int size = 50;
	int arr[size];
	int n,i;
	cout << "Enter the size of array: " << endl;
	cin >> n;
	cout << "Enter the elements: " <<endl;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int* ptr;
	ptr = arr;
	cout << "You entered: " << endl;
	for(i=0;i<n;i++)
	{
		
		cout << *(ptr+i) <<endl;
	}
	return 0;
}