#pragma once
#include <string>

class CMap {
private:
	std::string file_name;
	std::string locationName;
	int mapNumber;
	int mapLevel;

public:
	CMap(std::string _file_name,  int _mapNumber);
	~CMap();
	void loadMap();
	std::string getName();
	int getLevel();

};
