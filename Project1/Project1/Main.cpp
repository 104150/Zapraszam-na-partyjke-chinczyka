#include <stdio.h>
#include <iostream>

using namespace std; 

int main() {

	int wynik = 0;

	int odpowiedz;

	int ilosc_pytan = 3;

	for (int i = 0; i<ilosc_pytan; i++) {

		cout << "Ktory z wymienionych programow jest programem graficznym: \n";

		cout << "1) Wordpad,\n 2) Paint,\n 3) Gadugadu,\n Odpowiedz: ";

		cin >> odpowiedz;

		if (odpowiedz == 2) {

			wynik++;

			cout << "Brawo ! Prawidlowa odpowiedz! Otrzymujesz +1 pkt, teraz masz: " << wynik << "punktow\n";

		}

		else {

			wynik--;

			cout << "Niestety, nie udalo ci sie otrzymujesz -1 pkt, teraz masz: " << wynik << "punktow\n";

		}

	}

	cout << "Na koniec masz " << wynik << " punktow" << endl;

	return 0;

}

//Zapraszam na st� 700