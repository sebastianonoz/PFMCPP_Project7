#include "DragonSlayer.h"
#include "Dragon.h" 
#include "Item.h" 

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string nameInit, int hpInit, int armorInit) : Character(hpInit, armorInit, 4), name(nameInit)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(1);    
    attackItem.reset (new AttackItem ("attack item", 10));
} 

//DragonSlayer::getName 
const std::string& DragonSlayer::getName()
{
    return this->name;
}

#include <cassert>
void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //assert(false); 
        
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.        
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        if((dragon->getHP() > 0) && (attackItem!=nullptr))
        {
            attackItem->use(this);
            attackItem.reset();
        }
        
        while (dragon->getHP() > 0) 
        {
            dragon->takeDamage(attackDamage);
        }
    }
    Character::attack(other);
}

//DragonSlayer::getStats 
std::string DragonSlayer::getStats()
{
    return getCharacterStats(this); 
}
