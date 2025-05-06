#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _privatename;
public:
    Weapon(const std::string& type);
    ~Weapon();
    void setType(const std::string &name);
    std::string getType() const;
};

#endif
