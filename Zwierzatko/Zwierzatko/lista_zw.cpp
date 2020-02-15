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
