#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int hh, mm, ss, seconds;
	cout << "\nPlease Enter time:" << endl;
	cout << "Hours : ";
	cin >> hh;

	cout << "Minutes : ";
	cin >> mm;

	cout << "Seconds : ";
	cin >> ss;


	cout << "\nThe time is : " << hh << ":" << mm << ":" << ss << endl;
	seconds = hh * 3600 + mm * 60 + ss;
	cout << "the time in seconds is: " << seconds << endl;

	system("pause<0");
}