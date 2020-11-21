#include "OrcWarrior.h"
#include <iostream>
using namespace std;
unsigned int Character::AllCount = 0;
int main()
{
	setlocale(LC_ALL,"ru");
	Warrior warrior(100, 22);
	Orc orc(90,27);
	OrcWarrior orcWarrior(95, 25);

	Character* MyChampion=nullptr;
	Character* MyOpponent=nullptr;

	int myChampion = 0;
	int myOpponent = 0;
	cout << "Choose your champion: 1 - Warrior, 2 - Orc, 3 - OrcWarrior" << endl;
	cin >> myChampion;
	switch (myChampion)
	{
	case 1:
		cout << "You choose a Warrior" << endl;
		MyChampion = &warrior;
		break;
	case 2:
		cout << "You choose a Orc" << endl;
		MyChampion = &orc;
		break;	
	case 3:
		cout << "You choose a OrcWarrior" << endl;
		MyChampion = &orcWarrior;
		break;
	default:
		cout << "Wrong!" << endl;
		break;
	}
	cout << "Choose your opponent: 1 - Warrior, 2 - Orc, 3 - OrcWarrior" << endl;
	cin >> myOpponent;
	switch (myOpponent)
	{
	case 1:
		cout << "You choose a Warrior" << endl;
		MyOpponent = &warrior;
		break;
	case 2:
		cout << "You choose a Orc" << endl;
		MyOpponent = &orc;
		break;
	case 3:
		cout << "You choose a OrcWarrior" << endl;
		MyOpponent = &orcWarrior;
		break;
	default:
		cout << "Wrong!" << endl;
		break;
	}
	MyChampion->Battle(*MyOpponent);

	return 0;
	system("pause");
	system("pause");

}
