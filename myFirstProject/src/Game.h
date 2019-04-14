#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Wizard.h"

class Game
{
public:
	Game();
	~Game();
	
	void PrintIntroduction();
	void PrintMenu();

	void Play();

	Wizard m_MainCharacter;

private:
	void GoBackToMenu(char choise);
};

