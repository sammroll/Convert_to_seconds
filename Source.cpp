// P01 Convert to Seconds
//		Converts hours, minutes, and seconds to seconds
// Samantha Roldan

#include <iostream>
using namespace std;

int main() {

	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	int totalSeconds = 0;

	cout << "*** Po1: Convert to Seconds ***\n" << endl;

	//get input from user
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;

	//calculate number of seconds from hours (3600 seconds per hour)
	//	and add to total
	totalSeconds = totalSeconds + (hours * 3600);

	//calculate number of seconds from minutes (60 seconds per minute)
	//	and add to total
	totalSeconds = totalSeconds + (minutes * 60);

	totalSeconds = totalSeconds + seconds;

	//print results
	cout << endl;
	cout << "Total Seconds: " << totalSeconds << endl;

	return 0;
}