#include "QtMainW.h"
#include<qmessagebox.h>
#include<QString>


MainW::MainW(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

MainW::~MainW()
{

}

void MainW::push_kolejne_okno_button() {
    hide();
    hufiec = new Hufiec(this);
    hufiec->show();
}

void MainW::push_login_button() {
    QString klucz = ui.klucz->text();
    if (klucz == "abc") {
        push_kolejne_okno_button();
    }
    else {
        QMessageBox::critical(this, "Logowanie", "zle");
    }
}