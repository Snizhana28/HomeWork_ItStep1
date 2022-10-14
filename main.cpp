/*Task 2. The user enters the start time from the keyboard
and time of end of scooter use (hours, minutes
and seconds). Calculate the cost of the trip, if the cost
minutes - 2 hryvnias.*/
#include <iostream>
using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2; //hour, minute, second
    cout << "Enter the start time \nHour : ";
    cin >> h1;
    cout << "Minute : ";
    cin >> m1;
    cout << "Second : ";
    cin >> s1;
    cout << "Enter the end time \nHour : ";
    cin >> h2;
    cout << "Minute : ";
    cin >> m2;
    cout << "Second : ";
    cin >> s2;
    int suma, result;
    suma = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    result = suma / 60 * 2;
    cout << "The cost of the trip : " << result << " uah.";
	return 0;
}