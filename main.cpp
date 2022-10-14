/*Task 1. The user enters the time from the keyboard in seconds that have passed since the beginning of the day. Display the current one
time in hours, minutes and seconds. Count how much
hours, minutes and seconds left until midnight.*/
#include <iostream>
using namespace std;

int main()
{
	int second;
	cout << "Enter the time in seconds since the start of the day : ";
	cin >> second;
	int hours = second / 3600;
	int min = second / 60 - hours * 60;
	int sec = second - min * 60 - hours * 3600;
	cout << hours << " hours " << min << " min " << sec << " sec ";
	return 0;
}