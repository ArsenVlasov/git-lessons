#include "Orc.h"
#include <iostream>
using namespace std;
void Orc::Skills(Character& character)
{
	cout << "ORC RAGE!!!" << endl;
	this->dmg+=5;
	character.SetHP(character.GetHP()-5);
	cout << "<<Orc damage is increased by 5, enemy’s hp is reduced by 5>>" << endl;

}


