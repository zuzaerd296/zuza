#pragma once
#include<string>
#include "elem.h"

class ListaDr {
private:
	std::string nazwaHufca;
	//elem* head; //lista druzyn w hufcu
public:
	void wczytaj();
	void zapisz();
	void dodaj();
	void usun();
};