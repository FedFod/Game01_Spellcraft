#pragma once
#include <string>
#include <vector>
#include <iostream>

#define SEPARATOR "********************\n"
#define SMALLSEP "*******\n"

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
	Spell(const std::string& name, SpellType type, int cost);

	~Spell();

	std::string GetName();
	int GetCost();
	int GetLearnCode();

private:
	std::string m_Name;
	SpellType m_Type;

	int m_Power;
	int m_Cost;
	int m_LearnCode;
};


//---------- Master Spell Book Struct ----------
struct MasterSpellBook
{	
	static int LearnCode;
	static const int fireSpellsNum = 3;
	static const int waterSpellsNum = 2;
	static const int healingSpellsNum = 2;

	static Spell FireSpells[fireSpellsNum];
	static Spell WaterSpells[waterSpellsNum];
	static Spell HealingSpells[healingSpellsNum];

	static Spell* GetSpell(int learningId)
	{
		for (int i = 0; i < fireSpellsNum; i++) {
			int learnId = FireSpells[i].GetLearnCode();
			if (learnId == learningId)
			{
				return &FireSpells[i];
			}
		}
		for (int i = 0; i < waterSpellsNum; i++) {
			int learnId = WaterSpells[i].GetLearnCode();
			if (learnId == learningId)
			{
				return &WaterSpells[i];
			}
		}
		for (int i = 0; i < healingSpellsNum; i++) {
			int learnId = HealingSpells[i].GetLearnCode();
			if (learnId == learningId)
			{
				return &HealingSpells[i];
			}
		}
		Spell dummy;
		return &dummy;
	}

	static void PrintMasterSpellBook()
	{	
		std::cout << "+++ Fire Spells +++ " << std::endl;
		for (int i = 0; i < fireSpellsNum; i++) {
			std::cout << " - " << FireSpells[i].GetName() << " | Mana Cost: " << 
				FireSpells[i].GetCost() << " | Learning Code: " << FireSpells[i].GetLearnCode() <<  std::endl;
		}
		std::cout << std::endl;

		std::cout << "+++ Water Spells +++" << std::endl;
		for (int i = 0; i < waterSpellsNum; i++) {
			std::cout << " - " << WaterSpells[i].GetName() << " | Mana Cost: " << WaterSpells[i].GetCost()
				<< " | Learning Code: " << WaterSpells[i].GetLearnCode() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "+++ Healing Spells +++ " << std::endl;
		for (int i = 0; i < healingSpellsNum; i++) {
			std::cout << " - " << HealingSpells[i].GetName() << " | Mana Cost: " << HealingSpells[i].GetCost() 
				<< " | Learning Code: " << HealingSpells[i].GetLearnCode() << std::endl;
		}
		std::cout << SMALLSEP;
	}
};

