#include <iostream>
using namespace std;



int main()
{
	long long n;
	cout << "Please enter a number: ";
	cin >> n;
	int cifra;
	cout << "Enter the searched digit: " << endl;
	cin >> cifra;
	long long tmp = n;
	while (n != 0)
	{
		if (cifra == n % 10)
		{
			cout << "The digit exsit in the enterned number" << endl;
			return 0;
		}
		n=n/10;

	}
	cout << "The digit doesn't exist in the enterned number." << endl;
	return 0;
}

