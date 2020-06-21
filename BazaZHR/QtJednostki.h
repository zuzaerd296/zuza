#pragma once

#include <QMainWindow>
#include "ui_Jednostki.h"
#include"QtDruzyna.h"

class Jednostki : public QMainWindow
{
	Q_OBJECT

public:
	Jednostki(QWidget *parent = Q_NULLPTR);
	~Jednostki();
	
private slots:
	void dodaj_jednostke();
	void usun_jednostke();
	void cofnij_do_hufca();
	void wyswietl();

private:
	Ui::Jednostki ui;
	Druzyna* druzyna;
};
