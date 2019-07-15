#include <iostream>
using namespace std;

int main ()
{
	float arr[10]; int temp;
	cout << "Enter 5 numbers:\n";
	for (int i=0; i<5; i++)
		cin >> arr[i];

	//Now
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if (arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout <<endl;
	for (int i=0; i<5; i++)
		cout << arr[i] <<endl;

	

	return 0;
}