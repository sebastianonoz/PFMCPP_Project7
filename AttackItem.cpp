#include "AttackItem.h"
#include "Character.h"

AttackItem::AttackItem (const std::string& nameInit, int damageInit): Item (nameInit, damageInit)
{
    
}

void AttackItem::use (Character* ch)
{
    useAttackItem (ch, this);
} 
