/*Task 2. The user enters the time from the keyboard in seconds that have passed since the beginning of the working day. to count
how many whole hours he has left to sit at work,
if the working day is 8 hours.*/
#include <iostream>
using namespace std;

int main()
{
	const int workDay = 480; // 28800 sec = 480 min
	int s, m, result;
	cout << "Enter the time in seconds that have passed since the beginning of the working day : ";
	cin >> s;
	m = s / 60;
	result = (workDay - m) / 60;
	if (result == 1 || result == 0)
		cout << "You have to is sit at work " << result << " hour.";
	else if (1 < result < 8)
		cout << "You have to is sit at work " << result << " hours.";
	else
		cout << "Error!";
	return 0;
}