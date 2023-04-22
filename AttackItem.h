#include "Item.h"

struct AttackItem : Item
{
        AttackItem(const std::string& name_, int damage_);
        void use(Character* ch) override;
};
