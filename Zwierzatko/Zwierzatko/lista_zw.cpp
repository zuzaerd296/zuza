#include"header.h"
using namespace std;


Zwierzatko Lista_zw::losuj_zwierzatko() {
	//losowanie liczby
	int liczba= rand() % dlugosc;
	//szukanie zwierz¹tka
	int i = 0;
	elem*temp = head;
	while (i != liczba) {
		i++;
		temp = temp->next;
	}

	return temp->zw;
}

void Lista_zw::push(elem* temp) {
	elem*nowy = new elem(temp->zw);
	elem*tempp = this->head;
	head = nowy;
	head->next = tempp;
}

Lista_zw& Lista_zw:: operator = (Lista_zw& X) {
	elem* temp = this->head;
	elem* temp2 = temp->next;
	//kasujemy to co bylo
	while (temp) {
		if (temp2) {
			delete temp;
			temp = temp2;
			temp2 = temp->next;
		}
		delete temp;
	}
	//wpisujemy nowe, temp jest do listy X, a temp2 jest do nowej listy (this)
	temp = X.head;
	if (temp) {
		elem* nowy = new elem(temp->zw);
		this->head = nowy;
		temp2 = nowy;
		while (temp) {
			nowy = new elem(temp->zw);
			temp2->next = nowy;
			temp2 = nowy;
			temp = temp->next;
		}
	}
	return *this;
}

void Lista_zw::wypiszListe() {  //sprawdzam czy sie wszytko dobrze zpisalo
	elem*temp = head;
	int dl = this->dlugosc;
	int i = 1;
	while (i != dl) {
		cout << "zwierze " << i << endl;
		temp->zw.wypisz_zw();
		temp->zw.wypisz_L();
		cout << endl;
		i++;
		temp = temp->next;
	}
}

void Lista_zw::gra() {
	system("cls");
	this->zasady();
	system("PAUSE");
	system("cls");
	Zwierzatko wylosowane;
	punkty ile;
	ile.ustaw_punkty(0);

	wylosowane = this->losuj_zwierzatko();
	wylosowane.zgadywanie(ile);

	int x;
	cout << "Jesli chcesz grac dalej wpisz 1, \njesli chcesz wyjsc z gry lub rozpoczac gre od nowa (z liczba puntkow 0) wpisz 2" << endl;
	cin >> x;
	while (x == 1) {
		system("cls");
		wylosowane = this->losuj_zwierzatko();
		wylosowane.zgadywanie(ile);
		cout << "Jesli chcesz grac dalej wpisz 1, \njesli chcesz wyjsc z gry lub rozpoczac gre od nowa (z liczba puntkow 0) wpisz 2" << endl;
		cin >> x;
	}

}

void Lista_zw::PobierzDane(const string& dane)
{
	ifstream plik(dane);
	if (plik)
	{
		string zw, gat, PytLat, PytSr, PytTru, smieci;
		elem* temp = nullptr;
		int i = 0;

		while (!plik.eof())
		{
			getline(plik, zw);
			getline(plik, gat);
			getline(plik, PytLat);
			getline(plik, PytSr);
			getline(plik, PytTru);
			getline(plik, smieci);
			temp = this->stworz_element(zw, gat, PytLat, PytSr, PytTru);
			this->push(temp); //dodajemy na poczatek
			i++;
		}
		this->wpisz_dl(i);
		plik.close();

	}
	else
	{
		cout << "Nie istnieje plik o takiej nazwie." << endl;
		plik.close();
	}
}

void Lista_zw::wstep() {
	cout << "Witamy w grze \"zgadnij zwierzatko\"" << endl;
	cout << "Wybierz opcje: " << endl << "1. Zaczynamy gre! \n2. Wyjscie z gry." << endl;
}

void Lista_zw::zasady() {
	cout << "INSTRUKCJA" << endl;
	cout << "Za chwile na ekranie pojawi ci sie pierwsza podpowedz. \nJesli bedziesz wiedziec o jakie zwierze chodzi, \nwpisz je i kliknij enter. Jeli odpowiedz bedzie poprawna \nuzysasz maksymalna liczbe punktow (10). " << endl;
	cout << "Przy zlej odpowiedzi stracisz kolejno 4 i 3 punkty oraz \npojawi sie na ekranie kolejna podpowiedz." << endl;
	cout << "Jeli po trzeciej podpowiedzi nie uda ci sie zgadnac zwierzatka, \ngra sie konczy a twoj wynik to 0 punktow." << endl;
	cout << "POWODZENIA!!!" << endl;
}

elem* Lista_zw::stworz_element(string zw, string gat, string PytLat, string PytSr, string PytTru)
{
	Zwierzatko nowe;
	nowe.wpisz(zw, PytLat, PytSr, PytTru);
	nowe.wpisz_gatunek(gat);
	elem* nowy = new elem(nowe);
	return nowy;
}
