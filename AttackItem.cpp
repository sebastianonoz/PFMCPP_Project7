#include "AttackItem.h"
#include "Character.h"

AttackItem::AttackItem (const std::string& name, int damage): Item (name, damage)
{
    
}

void AttackItem::use (Character* ch)
{
    useAttackItem (ch, this);
}