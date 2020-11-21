#include "OrcWarrior.h"
#include <iostream>
using namespace std;
void OrcWarrior::Skills(Character& character)
{
	cout << "ORC-WARRIOR RAGE!!!" << endl;
	this->dmg += 7;
	character.SetHP(character.GetHP() - 5);
	character.SetDamage(character.GetDamage() - 5);
	cout << "<<Warrior damage is increased by 7, enemy damage and hp is reduced by 5 and >>" << endl;


}
