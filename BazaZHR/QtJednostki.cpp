#include "QtJednostki.h"


Jednostki::Jednostki(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Jednostki::~Jednostki()
{
}

void Jednostki::dodaj_jednostke() {

}

void Jednostki::usun_jednostke() {

}

void Jednostki::cofnij_do_hufca() {

}

void Jednostki::wyswietl() {
	hide();
	druzyna = new Druzyna(this);
	druzyna->show();
}
