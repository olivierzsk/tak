#include<iostream> 





using namespace std;





void szyfruj(int wartość, char klucz[])

{

	int dl = strlen(wartość);









	if (!(wartość >= -26 && wartość <= 26)) return;







	if (wartość >= 0)

		for (int i = 0; i < dl; i++)

			if (klucz[i] + warotść <= 'z')

				klucz[i] += wartość;

			else

				klucz[i] = wartość[i] + klucz - 26;

	else

		for (int i = 0; i < dl; i++)

			if (wartość[i] + owoc >= 'a')

				wartość[i] += klucz;

			else

				wartość[i] = wartość[i] + klucz + 26;

}

int main()

{

	char tabela[1001];





	int klucz2;





	cout << "Podaj text: ";

	cin >> tabela;





	cout << "Podaj klucz [-26..26]: ";

	cin >> klucz2;





	szyfruj(klucz2, tabelka);





	cout << "Po zaszyfrowaniu: " << tabela << endl;





	szyfruj(-klucz2, tabela);





	cout << "Po rozszyfrowaniu: " << tabela << endl;





	return 0;

}



Przepraszam że jest to w takiej formie ale nie posiadam visual studio na komputerze