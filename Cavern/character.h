#pragma once
#include <string>

class CCharacter {
protected:
	std::string name;
	int level;
	int hp;
	int max_hp;
	int resource;
	int max_resource;
	std::string charClass;
public:
	CCharacter(std::string _name, int _level, int max_resource);
	~CCharacter();
	std::string getName();
	int getLevel();
	int getHp();
	int getMaxHp();
	int getResource();
	int getMaxResource();
	virtual std::string getClass();
};

class CWarrior : public CCharacter {
private:
	
public:	
	CWarrior(std::string _name, int _level, int max_resource);
	~CWarrior();
	std::string getClass();
};

class CMage : public CCharacter {
private:

public:
	CMage(std::string _name, int _level, int max_resource);
	~CMage();
	std::string getClass();
};