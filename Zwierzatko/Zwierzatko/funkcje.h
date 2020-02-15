#pragma once
#include"header.h"
using namespace std;

void wstep();
//Funkcja wyswietla pstep do gry

elem* stworz_element(string zw, string gat, string PytLat, string PytSr, string PytTru);
/*Funkcja tworzy element listy zwierzat
Przyjmuje waroœci wpisywane do elementow*/

void PobierzDane(const string& dane, Lista_zw& lista);
//Funkcja wczytuje dane z pliku do listy zwierzat

void zasady();
// Funkcja wysiwetla zasady gry

void zgadywanie(Zwierzatko wylosowane, punkty& ile);
/* Funkcja wypisuje podopiedzi i sprawdza wpisywane hasla
Przyjmuje wartosci: wylosowane zwierzatko oraz ilosc zbobytych juz punktow */

void gra(Lista_zw lista);
/*Glowna funkcja gry wywolujaca inne funkcje
Przyjemuje liste zwierzat*/
