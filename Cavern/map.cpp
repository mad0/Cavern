#include "map.h"

CMap::CMap(std::string _file_name, int _mapNumber) {
	this->locationName = "Dom";
	this->mapNumber = _mapNumber;
	this->mapLevel = 0;
}

CMap::~CMap()  {
}

void CMap::loadMap() {
}

std::string CMap::getName() {
	return locationName;
}

int CMap::getLevel() {
	return mapLevel;
}
