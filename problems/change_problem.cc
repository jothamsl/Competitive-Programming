#include <iostream>
#include <array>
using namespace std;

void change(int money, int c[], int d[])
{
	int r = money;
	for (int i = 0; i < 4; i++)
	{
		d[i] = r / c[i];
		r = r - (c[i] * d[i]);
		cout << d[i] << ", ";
	}
	cout << "\n";
}

int main()
{
	int money;
	cout << "Enter amount of money: ";
	cin >> money;
	int c[4] = {25, 10, 5, 1};
	int d[4];
	change(money, c, d);
}
