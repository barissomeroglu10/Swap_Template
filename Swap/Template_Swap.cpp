/*
This code makes swap between two value.
Purpose of the code is learn how to use template.

Developer: Barış Someroğlu
Date: 07.07.2024 - 07:00 pm
*/

#include <iostream>

using namespace std;

// Template function definition
template <typename T>
void Swap(T x, T y)
{
	cout << "Value1 : " << x << endl;
	cout << "Value2 : " << y << endl;

	T temp;

	temp = x;
	x = y;
	y = temp;

	cout << "Value1 after swap : " << x << endl;
	cout << "Value2 after swap : " << y << endl;

	cout << "\n";
}

int main()
{
	// Change colour of console
	system("color E9");

	// Send different data type to template function
	Swap(10, 7);
	Swap(10.659, 6.456);
	Swap(10.69f, 6.45f);
	Swap("Baris", "Mizgin");
	Swap('A', 'B');

	return 0;
}