#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainW.h"
#include "QtHufiec.h"

class MainW : public QMainWindow
{
    Q_OBJECT

public:
    MainW(QWidget *parent = Q_NULLPTR);
    ~MainW();

private slots:
    void push_kolejne_okno_button();
    void push_login_button();

private:
    Ui::MainWClass ui;
    Hufiec* hufiec;
};
