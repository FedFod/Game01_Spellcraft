#include "Spell.h"

Spell::Spell(const std::string& name, SpellType type)
	: m_Name(name), m_Type(type)
{
}

Spell::Spell()
{
	m_Name = "Empty Scroll";
	m_Type = Undefined;
}

Spell::~Spell()
{
}

std::string Spell::GetName()
{
	return m_Name;
}

// Fire
Spell MasterSpellBook::FireSpells[] = {
	Spell("Shock", Spell::Fire),
	Spell("Firebomb", Spell::Fire),
	Spell("Lightning", Spell::Fire)
};
// Water
Spell MasterSpellBook::WaterSpells[] = {
	Spell("Fog", Spell::Water),
	Spell("Drown", Spell::Water)
};
// Healing
Spell MasterSpellBook::HealingSpells[] = {
	Spell("Revitalize", Spell::Healing),
	Spell("Back To Life", Spell::Healing)
};
