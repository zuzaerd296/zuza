#include"header.h"

using namespace std;


int main()
{
	srand(time(NULL));
	Lista_zw Listazw;
	//Tgraczy najlepsi;
	Listazw.PobierzDane("zwierzeta.txt");
	int opcja;
	do
	{
		system("cls");
		Listazw.wstep();
		cin >> opcja;
		switch (opcja)
		{
		case 1: Listazw.gra();
			break;
		case 2: cout << "Wyjscie z gry..." << endl;
			break;
		default:
			break;
		}

	} while (opcja != 2);

	
	return 0;
}