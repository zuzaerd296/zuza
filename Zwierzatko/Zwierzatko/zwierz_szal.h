#pragma once

#include"header.h"
using namespace std;

class Zwierz_szal {
protected:
	string zwierze;
	string Latwe, Srednie, Trudne;
	int* tab;
public:
//	void ustaw_tab(Lista_zw lista);
	void wypisz_L() { cout << this->Latwe << endl;  };
	void wypisz_S() { cout << this->Srednie << endl; };
	void wypisz_T() { cout << this->Trudne << endl; };
	void wypisz_zw() { cout << this->zwierze << endl; };
	string zwroc_zw() { return zwierze; }
	void sprawdz_zw(int losowa);
	void wpisz(string zwierze, string Latwe, string Srednie, string Trudne);
	void zgadywanie(punkty& ile); /* Funkcja wypisuje podopiedzi i sprawdza wpisywane hasla. Przyjmuje wartosci: wylosowane zwierzatko oraz ilosc zbobytych juz punktow */

};