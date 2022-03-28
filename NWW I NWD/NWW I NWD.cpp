#include <iostream>
using namespace std;


int main()
{
    int a;
    cout << "podaj liczbe 1: ";
    cin >> a;
    int b;
    cout << "podaj liczbe 2: ";
    cin >> b;
    int iloczyn;
    int nww;
    iloczyn = a * b;
    while (a != b) {

        if (a < b) {
            b = b - a;
        }

        else {
            a = a - b;
        }
    }
    nww = iloczyn / a;
    cout << "NWD:" << a << "\n";
    cout << "NWW:" << nww;
}

