#include "Dwarf.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string nameInit, int hpInit, int armorInit) : Character(hpInit, armorInit, 4), name(nameInit)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5); 
} 

//Dwarf::getName 
const std::string& Dwarf::getName()
{
    return this->name;
}

//Dwarf::getStats 
std::string Dwarf::getStats()
{
    return getCharacterStats(this); 
}
