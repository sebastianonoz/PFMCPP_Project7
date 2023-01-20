#include "Dragon.h"
#include "DragonSlayer.h"

//Dragon::Dragon
Dragon::Dragon(std::string nameInit, int hpInit, int armorInit) : Character(hpInit, armorInit, 80), name(nameInit)
{
    
} 

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName 
const std::string& Dragon::getName()
{
    return this->name;
}

//Dragon::getStats 
std::string Dragon::getStats()
{
    return getCharacterStats(this); 
}
