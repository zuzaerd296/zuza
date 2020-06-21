#pragma once
#include "elem.h"
#include "Osoba.h"
#include<string>

class DR {
private:
	int numer;
	std::string nazwa;
	//vektor osob w druzynie

public:
	void wczytaj();
	void zapisz();
	void DR::szyfruj(char tab[]);
	Osoba* odszyfruj();
	Osoba* szukaj();
	
};