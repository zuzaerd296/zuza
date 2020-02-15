#pragma once
#include"header.h"

using namespace std;

class punkty {
private:
	int wynik;
public:
	punkty() { wynik = 10; }
	void ustaw_punkty(int ile) { wynik = ile; }
	void wypisz() { cout << wynik << endl; }
	int zwroc_wynik() { return wynik; }
};