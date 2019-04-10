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

