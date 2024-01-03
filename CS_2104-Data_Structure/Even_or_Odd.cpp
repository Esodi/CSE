#include <iostream>
using namespace std;

/**
 * main - checks for odd or even.
 * Return: 0 success.
 */
int main(void)
{
	int a, b = 1;

	while (b)
	{
		cout << "Enter a number: ";
		cin >> a;
		if (a % 2 == 0)
		{
			cout << "Even Number\n";
		}
		else
		{
			cout << "Odd Number\n";
		}
	}

	return (0);
}
