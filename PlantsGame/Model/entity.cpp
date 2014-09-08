#include "entity.h"

Entity::Entity(int health, int armor, int shield, int damage)
    : m_health(health), m_armor(armor), m_shield(shield), m_damage(damage)
{
}

int Entity::health() const
{
    return m_health;
}

void Entity::setHealth(int health)
{
    m_health = health;
}
int Entity::armor() const
{
    return m_armor;
}

void Entity::setArmor(int armor)
{
    m_armor = armor;
}
int Entity::shield() const
{
    return m_shield;
}

void Entity::setShield(int shield)
{
    m_shield = shield;
}
int Entity::damage() const
{
    return m_damage;
}

void Entity::setDamage(int damage)
{
    m_damage = damage;
}




