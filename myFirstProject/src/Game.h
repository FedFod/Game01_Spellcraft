#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Wizard.h"
#include "Spell.h"

class Game
{
public:
	Game();
	~Game();

	void PrintWizardInfo(Wizard* wizzy);
	void PrintWizardKnownSpells(Wizard* wizzy);

};

