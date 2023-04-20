#include "AttackItem.h"
#include "Character.h"

AttackItem::AttackItem (const std::string& name_, int damage_): Item (name_, damage_) {}

void AttackItem::use(Character* ch)
{
    
    useAttackItem(ch, this);
    
}
