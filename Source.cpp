#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	long a, b, c, d, e, f, g, h, i, j, k, l, m, n;
	cout << "1)Add" << endl;
	cout << "2)Subtract" << endl;
	cout << "3)Multiply" << endl;
	cout << "4)Divide" << endl;
	cin >> a;

	if (a == 1)
	{
		cout << "Enter a number to add.";
		cin >> b;
		cout << "Enter a second number to add.";
		cin >> c;
		d = b + c;
		cout << d << endl;
	}

	if (a == 2)
	{
		cout << "Enter a number to subtract.";
		cin >> e;
		cout << "Enter a second number to subtract.";
		cin >> f;
		g = e - f;
		cout << g << endl;
	}

	if (a == 3)
	{
		cout << "Enter a number to multiply.";
		cin >> h;
		cout << "Enter a second number to multiply.";
		cin >> i;

		j = h * i;

		cout << j << endl;
	}

	{
		if (a == 4)
		{
			cout << "Enter a number to divide.";
			cin >> k;
			cout << "Enter a second number to divide.";
			cin >> l;
			m = l / k;

			if (k > l)
			{
				cout << "Error #";
			}

			cout << m << endl;


		}
		cout << "Thank you for using the Calculator! Press any key and enter to exit.";

		cin >> n;

		if (n == ' ')
		{
			return 0;
		}

	}

	_getch();
	return 0;
}