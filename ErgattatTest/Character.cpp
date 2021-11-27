#include "Character.h"

//handle attacking the provided character
void Character::attack(Character* characterToAttack) {

}

//handle defending against provided character
void Character::defend(Character* characterToDefendFrom) {

}

void Character::move() {

}


PlayerOne::PlayerOne() {
	health = 100;
	armor = 100;
	primaryWeaponType = Shotgun;
	secondaryWeaponType = None;
}

EvilBoss::EvilBoss() {
	health = 500;
	armor = 100;
	primaryWeaponType = Fireball;
	secondaryWeaponType = BattleAxe;
}

Princess::Princess() {
	health = 80;
	armor = 0;
	primaryWeaponType = None;
	secondaryWeaponType = None;
}

Squab::Squab() {
	health = 50;
	primaryWeaponType = Bomb;
}

Turtle::Turtle() {
	health = 60;
	armor = 50;
	primaryWeaponType = ShellShock;
}

Puffer::Puffer() {
	health = 60;
	armor = 20;
	primaryWeaponType = PoisonTouch;
}