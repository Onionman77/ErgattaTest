#pragma once

enum WeaponType {
	None,
	Shotgun,
	Fireball,
	BattleAxe,
	Bomb,
	ShellShock,
	PoisonTouch
};

enum MovementType {
	Ground,
	Air,
	Water
};

class Character {
protected:
	int health = 100;
	int armor = 0;
	WeaponType primaryWeaponType = None;
	WeaponType secondaryWeaponType = None;
	MovementType movementType = Ground;
};

class PlayerOne : Character {
public:
	PlayerOne();
};

class EvilBoss : Character {
public:
	EvilBoss();
};

class Princess : Character {
public:
	Princess();
};

class Minion : public Character {

};

class Squab : Minion {
public:
	Squab();
};

class Turtle : Minion {
public:
	Turtle();
};

class Puffer : Minion {
public:
	Puffer();
};


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

Squab::Squab () {
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