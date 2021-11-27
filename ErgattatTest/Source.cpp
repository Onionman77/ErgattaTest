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


void initializeGame() {

}

void initializeCharacters() {

}

void checkForLevelLoad() {
	bool enteringNewLevel = false;

	if (enteringNewLevel)
		initializeLevel();
}

void initializeLevel() {

}

void checkForPlayerInputs() {

}

void handleEnemyMovements() {

}

void resolveConflicts() {

}