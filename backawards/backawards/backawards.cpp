#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wyraz;
	cout << "Podaj jakikolwiek wyraz ja go napisze w spak: ";
	cin >> wyraz;

	int dlugosc = wyraz.length();

	for (int i = dlugosc - 1; i >= 0; i--)
	{
		cout << wyraz[i];
	}




	return 0;
}