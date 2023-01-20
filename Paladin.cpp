#include "Paladin.h"

//Paladin::Paladin
Paladin::Paladin(std::string nameInit, int hpInit, int armorInit) : Character(hpInit, armorInit, 10), name(nameInit)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6); 
} 

//Paladin::getName 
const std::string& Paladin::getName()
{
    return this->name;
}

//Paladin::getStats 
std::string Paladin::getStats()
{
    return getCharacterStats(this); 
}
