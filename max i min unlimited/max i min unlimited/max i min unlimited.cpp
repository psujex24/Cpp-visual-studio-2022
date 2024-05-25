#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
    cout << "Podaj 3 liczby oddzielone spacja: ";
    cin >> a >> b >> c;

    m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return 0;
}
