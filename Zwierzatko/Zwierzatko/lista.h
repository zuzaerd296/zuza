#pragma once
#include"header.h"
using namespace std;

struct elem {
	Zwierzatko zw;
	elem*next;
	elem (const Zwierzatko&zwierz) : zw(zwierz), next(nullptr) {}
};

class Lista_zw {
protected:
	elem* head;
	int dlugosc;
public:
	void wpisz_dl(int i) { dlugosc = i; }
	int zw_dl() { return dlugosc; }
	elem*zwroc_glowe() { return head; };

	Zwierzatko losuj_zwierzatko();
	void push(elem* temp);
	//friend ostream& operator << (ostream& os, const Lista_zw& X);
	Lista_zw& operator = (Lista_zw& X);
	void wypiszListe();//do sprawdzenia czy dobrze wprowadzialam dane
	
};
