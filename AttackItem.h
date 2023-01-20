#include "Item.h"

struct AttackItem : Item
{
    AttackItem (const std::string& nameInit, int damageInit);
    void use (Character* ch) override;
}; 
