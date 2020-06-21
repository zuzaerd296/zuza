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
	void gra(); /*Glowna funkcja gry wywolujaca inne funkcje. Przyjemuje liste zwierzat*/
	void PobierzDane(const string& dane); //Funkcja wczytuje dane z pliku do listy zwierzat
	void zasady();
	void wstep();
	elem* stworz_element(string zw, string gat, string PytLat, string PytSr, string PytTru); /*Funkcja tworzy element listy zwierzat. Przyjmuje waroœci wpisywane do elementow*/
};
