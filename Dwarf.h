#pragma once

#include "Character.h"

struct Dwarf : Character
{  
    Dwarf(std::string nameInit, int hpInit, int armorInit);
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
