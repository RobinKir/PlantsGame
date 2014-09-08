#include "explosive.h"

Explosive::Explosive(int damage, int direction, int radiusX, int radiusY, int lifetime)
    : m_damage(damage), m_direction(direction), m_radiusX(radiusX), m_radiusY(radiusY), m_lifetime(lifetime)
{

}

int Explosive::damage() const
{
    return m_damage;
}

void Explosive::setDamage(int damage)
{
    m_damage = damage;
}
int Explosive::direction() const
{
    return m_direction;
}

void Explosive::setDirection(int direction)
{
    m_direction = direction;
}
int Explosive::radiusX() const
{
    return m_radiusX;
}

void Explosive::setRadiusX(int radiusX)
{
    m_radiusX = radiusX;
}
int Explosive::radiusY() const
{
    return m_radiusY;
}

void Explosive::setRadiusY(int radiusY)
{
    m_radiusY = radiusY;
}
int Explosive::lifetime() const
{
    return m_lifetime;
}

void Explosive::setLifetime(int lifetime)
{
    m_lifetime = lifetime;
}





