#include <iostream>
using namespace std;

/**
 * len - function the fingd length of string.
 * @s: string.
 * Return: length of str.
 */
int len(string s)
{
	int i  = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - excectute as main.
 * Return: 0 on success.
 */
int main(void)
{
	string s;
	int y;

	while (1)
	{
		cout << "Enter a string: \n";
		cin >> s;
		y = len(s);

		cout << "Len: " << y;
		cout << "\n";
	}

	return (0);
}
