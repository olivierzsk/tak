#include <iostream>

using namespace std;

bool funkcja1(char wyraz1[], char wyraz2[]) {
    int dl1 = strlen(wyraz1);
    int dl2 = strlen(wyraz2);

    if (dl1 != dl2)
        return false;

    char licz[130] = {};

    for (int a = 0; a < dl1; a++) {
        licz[wyraz1[a]]++;
    }

    for (int a = 0; a < dl1; a++){
        licz[wyraz2[a]]--;
    }

    for (int a = 0; a < 127; a++) {
        if (licz[a] != 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    char licz[130];

    char wyraz1[130];

    char wyraz2[130];

    cout << "jaki wyraz1? ";
    cin >> wyraz1;

    cout << "jaki wyraz2? ";
    cin >> wyraz2;

    if (funkcja1(wyraz1, wyraz2) == true){
        cout << "sa anagramami";
    }

    else{
        cout << "nie sa anagramami";
    }
}