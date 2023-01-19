#include "Item.h"

struct AttackItem : Item
{
    AttackItem (const std::string& name, int damage);
    void use (Character* ch) override;
};