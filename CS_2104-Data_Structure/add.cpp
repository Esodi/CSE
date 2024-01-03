#include <iostream>
//using namespace std;

/**
 * main - adds two nums.
 * Return: 0 on success.
 */
int main(void)
{
	using namespace std;
	int a;
	int b;

	cout << "Enter the 1st Num: ";
	cin >> a;
	cout << "Enter the 2nd Num: ";
	cin >> b;
	int c = a + b;
	cout << "" << a << " + " << b << " = " << c << endl;
	return (0);
}
