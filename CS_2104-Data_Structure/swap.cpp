#include <iostream>
using namespace std;

/**
 * main - swap numbers.
 * Return: 0 success.
 */
int main(void)
{
	int a, b, tmp;

	cout << "Enter 1st Num: ";
	cin >> a;
	cout << "Enter 2nd Num: ";
	cin >> b;

	cout << "\n\nBefore Swap\n";
	cout << "1st num: " << a << "\n2nd num: " << b;
	tmp = a;
	a = b;
	b = tmp;
	
	cout << "\n\nAfter Swap\n";
	cout << "1st num: " << a << "\n2nd num: " << b;

	return (0);
}
