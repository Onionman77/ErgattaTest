using namespace std;
#include"stdafx.h"
#include<iostream>
#include "Character.h"

PlayerOne playerOne;
EvilBoss evilBoss;
Princess princess;
Minion* levelMinions;

void initializeGame();
void checkForLevelLoad();
void initializeLevel();
void cleanupLevel();
void handleEnemyMovements();
void resolveConflicts();
void checkForPlayerInputs();

void main() {
	initializeGame();

	while (true) {
		checkForPlayerInputs();
		handleEnemyMovements();
		resolveConflicts();

		checkForLevelLoad();
	}
}

//perform basic initialization of the game's resources
void initializeGame() {
	levelMinions = NULL;
}

//check if requirements are met to enter to a new level
void checkForLevelLoad() {
	bool enteringNewLevel = false; //check keeping track if we've satisfied conditions to enter a new level or not

	if (enteringNewLevel)
		initializeLevel();
}

//perform basic tasks for level initialization
//cleanup any previously initialized minions if there are any
void initializeLevel() {
	cleanupLevel();

	int numLevelMinionsToInitialize = 0; //counter for number of minions to bring into level
	if (numLevelMinionsToInitialize > 0)
		levelMinions = new Minion[numLevelMinionsToInitialize];
}

//cleanup any previously allocated minions
void cleanupLevel() {
	if (levelMinions != NULL)
		delete(levelMinions);
}

void checkForPlayerInputs() {

}

void handleEnemyMovements() {

}

void resolveConflicts() {

}