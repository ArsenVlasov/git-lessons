#include "Warrior.h"
#include <iostream>
using namespace std;
void Warrior::Skills(Character& character)
{
	cout << "WARRIOR VALOR!!!" << endl;
	this->dmg += 5;
	character.SetDamage(character.GetDamage() - 5);
	cout << "<<Warrior damage is increased by 5, enemy damage is reduced by 5>>" << endl;

}
