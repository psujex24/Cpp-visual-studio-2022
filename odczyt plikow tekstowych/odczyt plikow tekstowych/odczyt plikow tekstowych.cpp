#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
	string linia;
	int nr_linii = 1;

	fstream plik;
	plik.open("wizytowka.txt", ios::in);

	if (plik.good() == false) cout << "Plik nie istnieje!";
	

	while (getline(plik, linia))
	{
		switch (nr_linii)
		{
			case 1: imie = linia; break;
			case 2: nazwisko = linia; break;
			case 3: nr_tel = atoi(linia.c_str()); break;
		}

		nr_linii++;
	}

	plik.close();

	cout << imie << endl;
	cout << nazwisko  << endl;
	cout << nr_tel  << endl;

	return 0;
}