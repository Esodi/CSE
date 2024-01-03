#include <iostream>
using namespace std;

/**
 * main - finding the largest num of three.
 * Return: 0 on success.
 */
int main(void)
{
	int a, b, c;

	while (1)
	{
		cout << "Enter 1st Num: ";
		cin >> a;
		cout << "Enter 2nd Num: ";
		cin >> b;
		cout << "Enter 3rd Num: ";
		cin >> c;

		cout << "\t";
		if (a >= b && a >= c)
			cout << a << " is largest\n";
		else if (b >= a && b >= c)
			cout << b << " is the largest\n";
		else
			cout << c << " is the largest\n";
	}
	return (0);
}
