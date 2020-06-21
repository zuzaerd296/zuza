#include"header.h"
using namespace std;

void Zwierz_szal::wpisz(string zwierze, string Latwe, string Srednie, string Trudne) {
	this->zwierze = zwierze;
	this->Latwe = Latwe;
	this->Trudne = Trudne;
	this->Srednie = Srednie;
}

void Zwierz_szal::zgadywanie(punkty& ile) {
	string haslo;
	string zwierze = this->zwroc_zw();
	int wynik_akt = 10;

	this->wypisz_T();
	cin >> haslo;
	if (haslo == zwierze) {
		cout << "Udalo sie!" << endl;
		cout << "Zdobyte punkty: " << wynik_akt << endl;
	}
	else {
		cout << "Probuj dalej" << endl;
		wynik_akt = 6;
		this->wypisz_S();
		cin >> haslo;
		if (haslo == zwierze) {
			cout << "Udalo sie!" << endl;
			cout << "Zdobyte punkty: " << wynik_akt << endl;
		}
		else {
			cout << "Probuj dalej" << endl;
			wynik_akt = 3;
			this->wypisz_L();
			cin >> haslo;
			if (haslo == zwierze) {
				cout << "Udalo sie!" << endl;
				cout << "Zdobyte punkty: " << wynik_akt << endl;
			}
			else {
				wynik_akt = 0;
				cout << "Nie udalo sie..." << endl;
				cout << "To zwierze to: ";
				this->wypisz_zw();
				cout << "Zdobyte punkty: " << wynik_akt << endl;
			}
		}
	}
	int wynik = ile.zwroc_wynik();
	wynik += wynik_akt;
	ile.ustaw_punkty(wynik);
	cout << "Laczny wynik: ";
	ile.wypisz();
}