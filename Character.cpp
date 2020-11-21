#include "Character.h"
#include <iostream>
using namespace std;
#define ENTER cin.get()


void InfoAboutChoise(const Character & character)
{
	cout << character.Raca << " makes his choise ..." << endl;

	cout << "1 - use unique ability" << endl;
	cout << "2 - hit opponent" << endl;
}
Character::Character()
{
	hp = 0;
	dmg = 0;
}

unsigned int Character::GetAllCount()
{
	return AllCount;
}

void Character::SetDamage(int dmg)
{
	this->dmg = dmg;
}

void Character::SetHP(int hp)
{
	this->hp = hp;
}

int Character::GetDamage()
{
	return dmg;
}

int Character::GetHP()
{
	return hp;
}

Character::Character(int hp, int dmg)
{
	this->hp = hp;
	this->dmg = dmg;
	AllCount++;

}


void Character::PrintInfoAbout()
{
	cout << this->Raca << endl;
	cout << "My hp:\t" << this->hp << endl;
	cout << "My dmg:\t" << this->dmg << endl << endl;
}

void Character::PrintInfoAbout(Character& character)
{
	cout << this->Raca << "\t\t\t" << character.Raca << endl;
	cout << "My hp: " << this->hp << "\tand\t" << "His hp: " << character.hp << endl;
	cout << "My dmg: " << this->dmg << "\t\tHis dmg:" << character.dmg << endl << endl;
}

void Character::Battle(Character& character)
{
	cout << "Oh no! " << this->Raca << " make battle with the " << character.Raca << endl << endl;
	unsigned int RoundStats = 0;
	unsigned int SkillsOrFight = 0;
	while (true)
	{
		RoundStats++;
		cout << "Round #" << RoundStats << endl;

		if (RoundStats % 2 == 0)
		{
			InfoAboutChoise(character);
			cin >> SkillsOrFight;
			if (SkillsOrFight==1)
				character.Skills(*this);
			if (SkillsOrFight == 2)
			{
				this->hp -= character.dmg;
				if (this->hp < 0)
					this->hp = 0;
			}
		}
		else
		{
			InfoAboutChoise(*this);
			cin >> SkillsOrFight;
			if (SkillsOrFight == 1)
				this->Skills(character);
			if (SkillsOrFight == 2)
			{
				character.hp -= this->dmg;
				if (character.hp < 0)
					character.hp = 0;
			}
		}
		PrintInfoAbout(character);
		ENTER;
		if (character.hp <= 0)
		{
			cout << this->Raca << " is win!" << endl << endl;
			break;
		}
		if (this->hp <= 0)
		{
			cout << character.Raca << " is win!" << endl << endl;
			break;
		}
	}
}

