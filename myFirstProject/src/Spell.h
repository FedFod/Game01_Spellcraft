#pragma once
#include <string>
#include <vector>


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

	std::string m_Name;
	SpellType m_Type;
	int m_Power;
	int m_Cost;
};


//---------- Master Spell Book Struct ----------
struct MasterSpellBook
{	
	Spell FireSpells[3]  = {};
	Spell WaterSpells[2] = {};
	Spell HealingSpells[2] = {};

	MasterSpellBook() 
		:
		// Fire
		FireSpells {
			Spell("Shock", Spell::Fire),
			Spell("Firebomb", Spell::Fire),
			Spell("Lightning", Spell::Fire)
		},
		// Water
		WaterSpells {
			Spell("Fog", Spell::Water),
			Spell("Drown", Spell::Water)
		},
		// Healing
		HealingSpells{
			Spell("Revitalize", Spell::Healing),
			Spell("Back To Life", Spell::Healing)
		}
	{}
};



