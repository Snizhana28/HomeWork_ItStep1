/*Task 1. The user enters the distance from the keyboard
to the airport and the time it takes to get there. Calculate
the speed at which he needs to travel.*/
#include <iostream>
using namespace std;

int main()
{
	double s, t;
	cout << "Speed in km -> ";
	cin >> s;
	cout << "Time in min -> ";
	cin >> t;
	if (0 < s && t != 0 && 60 >= t && t > 0)                //in 1 hour 60 minutes
	{
		cout << "Speed -> " << s / t << " km/min" << endl;
	}
	else if (0 < s && t != 0 && 60 < t && t > 0)
	{
		cout << "Speed -> " << s / (t / 60) << " km/hour" << endl;
	}
	else
	{
		cout << "Eror!";
	}
	return 0;
}