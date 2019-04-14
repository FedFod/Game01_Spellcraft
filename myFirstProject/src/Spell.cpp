#include "Spell.h"

Spell::Spell(const std::string& name, SpellType type, int cost)
	: m_Name(name), m_Type(type), m_Cost(cost)
{
	m_LearnCode = ++MasterSpellBook::LearnCode;
}

Spell::Spell()
{
	m_Name = "Empty Scroll";
	m_Type = Undefined;
	m_Cost = -1;
}

Spell::~Spell()
{
}

// Getters --------------------
std::string Spell::GetName()
{
	return m_Name;
}

int Spell::GetCost()
{
	return m_Cost;
}

int Spell::GetLearnCode()
{
	return m_LearnCode;
}
//----------------------------

int MasterSpellBook::LearnCode = 0;
// Fire
Spell MasterSpellBook::FireSpells[] = {
	Spell("Shock", Spell::Fire, 20),
	Spell("Firebomb", Spell::Fire, 50),
	Spell("Lightning", Spell::Fire, 40)
};
// Water
Spell MasterSpellBook::WaterSpells[] = {
	Spell("Fog", Spell::Water, 10),
	Spell("Drown", Spell::Water, 30)
};
// Healing
Spell MasterSpellBook::HealingSpells[] = {
	Spell("Revitalize", Spell::Healing, 40),
	Spell("Back To Life", Spell::Healing, 70)
};
