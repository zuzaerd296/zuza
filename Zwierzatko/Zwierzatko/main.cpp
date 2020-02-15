#include"header.h"

using namespace std;


int main()
{
	srand(time(NULL));
	Lista_zw Listazw;
	Tgraczy najlepsi;
	PobierzDane("zwierzeta.txt",Listazw);
	int opcja;
	do
	{
		system("cls");
		wstep();
		cin >> opcja;
		switch (opcja)
		{
		case 1: gra(Listazw);
			break;
		case 2: cout << "Wyjscie z gry..." << endl;
			break;
		default:
			break;
		}

	} while (opcja != 2);

	system("PAUSE");
	return 0;
}