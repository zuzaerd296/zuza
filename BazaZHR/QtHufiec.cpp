#include "QtHufiec.h"

Hufiec::Hufiec(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

Hufiec::~Hufiec()
{
}

void Hufiec::push_pokaz_j_button() {
    hide();
    jednostki = new Jednostki(this);
    jednostki->show();
}