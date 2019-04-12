// This is my first showcase project
// Building a game

#include "Game.h"

using namespace std;

int main() {

	Game game;

	game.PrintIntroduction();
	
	game.Play();

	system("pause");

	return 0;
}