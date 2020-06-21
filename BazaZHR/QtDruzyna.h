#pragma once

#include <QMainWindow>
#include "ui_Druzyna.h"
#include "QtHarcerz.h"
#include "QtInstruktor.h"

class Druzyna : public QMainWindow
{
	Q_OBJECT

public:
	Druzyna(QWidget *parent = Q_NULLPTR);
	~Druzyna();

private slots:
	void dodaj_os();
	void usun_os();
	void cofnij_do_j();
	void szukaj();

private:
	Ui::Druzyna ui;

};
