using namespace std;
#include <iostream>

void szyfruj(int klucz, char tab[]);

int main()
{
	int klucz;

	char tab[200];

	cin >> klucz;

	cin >> tab;
}

	void szyfruj(int klucz, char tab[]) {

		int dl;


		dl = strlen(tab);

		if (!(klucz >= -26 && klucz <= -26)) {

			return;
		}
		if (klucz >= 0) {

			for (int i = 0; i < dl; i++) {

				if (tab += klucz <= 'z') {

					tab += klucz;
				}
				else { tab = tab + klucz - 26 }
			}
		}
		else
			for (i < dl)
				if (tab + klucz >= a) {

					tab + klucz;
				}
				else {
					tab + tab + klucz + 26;
				}
	}
	
















	   

