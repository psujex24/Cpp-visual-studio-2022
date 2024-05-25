#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cout << "dodawanie stringow" << endl;
		string jeden, dwa, zdanie, wybor;
		cout << "napisz pierwszy wyraz: ";
		cin >> jeden;
		cout << "napisz drugi wyraz: ";
		cin >> dwa;
		zdanie = jeden + ' ' + dwa;
		cout << zdanie;
		cout << "Czy napisac te wyrazy z duzych liter? (napisz tak lub nie z malej litery);
		cin >> wybor;
		if (wybor == "tak")
		{
			transform(zdanie.begin(), zdanie.end(), zdanie.begin(), ::toupper);
			cout << zdanie;
		}
		else return 0;


	return 0;

}