#pragma once
#include <string>
#include <vector>
#include <iostream>

class Spell
{
public:
	enum SpellType : unsigned char
	{
		Fire,
		Water,
		Healing,
		Death,
		Growth,
		Undefined
	};

	Spell();
	Spell(const std::string& name, SpellType type);

	~Spell();

	std::string GetName();

private:
	std::string m_Name;
	SpellType m_Type;

	int m_Power;
	int m_Cost;
};


//---------- Master Spell Book Struct ----------
struct MasterSpellBook
{	
	static const int fireSpellsNum = 3;
	static const int waterSpellsNum = 2;
	static const int healingSpellsNum = 2;

	static Spell FireSpells[fireSpellsNum];
	static Spell WaterSpells[waterSpellsNum];
	static Spell HealingSpells[healingSpellsNum];

	static void PrintMasterSpellBook()
	{
		for (int i = 0; i < fireSpellsNum; i++) {
			std::cout << FireSpells[i].GetName() << std::endl;
		}
	}
};

