#pragma once
#include <string>

class Osoba {
private:
	std::string imie;
	std::string nazwisko;
	int pesel;
	std::string st_h;
	std::string funkcja;
public:
	Osoba(std::string I, std::string N, int P, std::string St, std::string F);

	void wyswietl();
	std::string get_imie() { return imie; };
	std::string get_nazwisko() { return nazwisko; };
	int get_pesel() { return pesel; };
	std::string get_st_h() { return st_h; };
	std::string get_funkcja() { return funkcja; };
	
};