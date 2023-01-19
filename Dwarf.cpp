#include "Dwarf.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 4), name(name)
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
