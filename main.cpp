/*Task 3. The user enters the distance from the keyboard,
gasoline consumption per 100 km and the cost of three types of gasoline.
Display a comparative table with the cost of a trip on different types of fuel.*/
#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "Enter the distance (km) : ";
	cin >> x;
	cout << "Enter gasoline consumption (liters/km) : ";
	cin >> y;
	float a1, a2, a3;
	cout << "Enter the cost of benzine (A-95+) : ";     // A95premium = 49.50; A95 = 49.00; float A92 = 48.00;
	cin >> a1;
	cout << "Enter the cost of benzine (A-95) : ";
	cin >> a2;
	cout << "Enter the cost of benzine (A-92) : ";
	cin >> a3;
	float res1 = x * y * a1;
	float res2 = x * y * a2;
	float res3 = x * y * a3;
	cout << "Comparative table of the cost of travel on different types of benzine :" << endl;
	cout << "A-95+  | " << res1 << endl;
	cout << "A-95   | " << res2 << endl;
	cout << "A-92   | " << res3 << endl;
	return 0;
}