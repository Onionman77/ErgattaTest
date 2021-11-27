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


