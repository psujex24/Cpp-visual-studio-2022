#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
	return m * 39.37;
}
float ile_jardy(float j)
{
	return j * 1.0936;
}
void ile_mil(float m)
{
	cout << "Na mile to : " << m * 0.0006213;
}

int main() 
{
	cout << "Podaj ilosc metrow: ";
	cin >> metry;

	cout << "Na cale to: " << ile_cali(metry) << endl;
	cout << "Na jardy to: " << ile_jardy(metry) << endl;
	ile_mil(metry);

	return 0;
}