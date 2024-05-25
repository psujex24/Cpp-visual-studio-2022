#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> a >> b >> c;
    if ((a >= b) && (a >= c))
        cout << "Najwieksza liczba to " << a << endl;
    else if ((b >= a) && (b >= c))
        cout << "Najwieksza liczba to " << b << endl;
    else if ((c >= a) && (c >= b))  
        cout << "Najwieksza liczba to " << c << endl;

    if ((a <= b) && (a <= c))
        cout << "Najmniejsza liczba to " << a;
    else if ((b <= a) && (b <= c))
        cout << "Najmniejsza liczba to " << b;
    else if ((c <= a) && (c <= b))
        cout << "Najmniejsza liczba to " << c;

    return 0;
}
