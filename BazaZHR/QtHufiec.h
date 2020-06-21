#pragma once

#include <QDialog>
#include "ui_Hufiec.h"
#include "QtJednostki.h"

class Hufiec : public QDialog
{
	Q_OBJECT

public:
	Hufiec(QWidget *parent = Q_NULLPTR);
	~Hufiec();

private slots:
	void push_pokaz_j_button();

private:
	Ui::Hufiec ui;
	Jednostki* jednostki;
};
