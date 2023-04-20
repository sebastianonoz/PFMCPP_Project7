#include "Dragon.h"
#include "DragonSlayer.h"


Dragon::Dragon(std::string nameInit, int hpInit, int armorInit) : Character(hpInit, armorInit, 80), name(nameInit) {
    
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

const std::string& Dragon::getName()
{
    return this->name;
}
 
std::string Dragon::getStats()
{
    return getCharacterStats(this); 
}
