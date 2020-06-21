#include"DR.h"
#include<cstdlib>

void DR::szyfruj(char tab[])
{
	int klucz = 3;
	int dl = std::strlen(tab); //okreœlenie iloœci znaków wyrazu

	//sprawdzenie, czy klucz miesci sie w zakresie
	if (!(klucz >= -26 && klucz <= 26)) return;

	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'Z')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz - 26;
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'A')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz + 26;
		}
	}
}

