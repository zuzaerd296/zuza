#pragma once

#include <QMainWindow>
#include "ui_Harcerz.h"
#include "Osoba.h"

class Harcerz : public QMainWindow
{
	Q_OBJECT

public:
	Harcerz(QWidget *parent = Q_NULLPTR);
	~Harcerz();

private:
	Ui::Harcerz ui;
};
