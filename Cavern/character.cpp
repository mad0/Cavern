#include "character.h"
#include <iostream>

CCharacter::CCharacter(std::string _name, int _level, int max_resource) : name(_name), level(_level), max_resource(max_resource) {
	std::cout << "CHARACTER CREATE: ";
	this->resource = 0;
}


CCharacter::~CCharacter() {
	std::cout << "CHARACTER DESTRUCT: ";
}

std::string CCharacter::getName(){
	std::cout << "PLAYER\n";
	return name;
}

int CCharacter::getLevel(){
	return level;
}

int CCharacter::getHp(){
	return hp;
}

int CCharacter::getMaxHp() {
	return max_hp;
}

int CCharacter::getResource() {
	return resource;
}

//GET MAX RAGE
int CCharacter::getMaxResource() {
	return max_resource;
}

std::string CCharacter::getClass()
{
	return charClass;
}

//WARRIOR/RAGE
CWarrior::CWarrior(std::string _name, int _level, int max_resource) : CCharacter(_name, _level, max_resource) {
	std::cout << "WARRIOR!\n";
}

CWarrior::~CWarrior(){
	std::cout << "WARRIOR!\n";
}

std::string CWarrior::getClass() {
	return charClass = "RAGE: ";
}

//MAGE/MANA
CMage::CMage(std::string _name, int _level, int max_resource) : CCharacter(_name, _level, max_resource) {
	std::cout << "MAGE!\n";
}

CMage::~CMage() {
	std::cout<<"MAGE!\n";
}

std::string CMage::getClass() {
	return charClass = "MANA: ";
}
