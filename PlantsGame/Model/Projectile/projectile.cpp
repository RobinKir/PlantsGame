#include "projectile.h"

Projectile::Projectile(int damage, int range) : Drawable(), Moveable(), m_damage(damage), m_range(range)
{

}

int Projectile::damage() const
{
    return m_damage;
}

void Projectile::setDamage(int damage)
{
    m_damage = damage;
}
int Projectile::range() const
{
    return m_range;
}

void Projectile::setRange(int range)
{
    m_range = range;
}


