#include "Paladin.h"

//Paladin::Paladin
Paladin::Paladin(std::string name, int hp, int armor) : Character(hp, armor, 10), name(name)
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
