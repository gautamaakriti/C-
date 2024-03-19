 #include <iostream>

using namespace std;

int main()
{
	
	int days;
	cout << "Enter number of days: " <<endl;
	cin >> days;

	int year, rdays;
	year = days / 365;
	rdays = days % 365;
	cout << year << " Years And " << rdays << " days" <<endl;

	return 0;
	
}