// This is my first showcase project
// Building a game

#include "Game.h"
#include "Wizard.h"

using namespace std;

int main() {

	Game game;

	MasterSpellBook masterSpellBook;

	cout << "Welcome to Lord of Wizardry! Please enter your name --> " << endl;
	
	string mainCharacterName = "";
	cin >> mainCharacterName;

	int mainCharacterAge = -1;
	
	cout << "Please enter your age --> " << endl;
	cin >> mainCharacterAge;

	Wizard wizzy(mainCharacterName, mainCharacterAge);

	game.PrintWizardInfo(&wizzy);

	wizzy.LearnSpell(masterSpellBook.FireSpells[0]);

	game.PrintWizardKnownSpells(&wizzy);

	cin.get();
	cin.get();

	return 0;
}