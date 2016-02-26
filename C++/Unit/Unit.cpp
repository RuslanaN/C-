#include <iostream>
#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->damage = dmg;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->name = name;
}

Unit::~Unit() {

}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    
    int newHp = hitPoints + hp;
    
    if ( newHp > hitPointsLimit ) {
        newHp = hitPointsLimit;
    }
    hitPoints = newHp;
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    
    hitPoints -= dmg;
    
    if ( hitPoints < 0 ) {
        hitPoints = 0;
        throw UnitIsDead();
    }
}

void Unit::attack(Unit& enemy){
    enemy.takeDamage(damage);
    enemy.counterAttack(*this);
}
void Unit::counterAttack(Unit& enemy) {
    enemy.takeDamage(damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit){
    out << "Name: " << unit.getName() << std::endl;
    out << "hitPoints: " << unit.getHitPoints() << std::endl;
    out << "damage: " << unit.getDamage() << std::endl;
    
    return out;
}
