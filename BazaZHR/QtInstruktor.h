#pragma once

#include <QMainWindow>
#include "ui_Instruktor.h"
#include "QtHarcerz.h"

class Instruktor : public QMainWindow, public Harcerz
{
	Q_OBJECT

public:
	Instruktor(QWidget *parent = Q_NULLPTR);
	~Instruktor();

private:
	Ui::Instruktor ui;
	QString st_instruktorski;
};
