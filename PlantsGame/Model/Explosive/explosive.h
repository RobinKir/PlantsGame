#ifndef EXPLOSIVE_H
#define EXPLOSIVE_H

#include "Model/drawable.h"

/**
 * @brief The Explosive class is an abstract class for objects that
 * will explode and cause damage.
 */

class Explosive : public Drawable
{
public:
    //>> Constructor
    Explosive(int damage, int direction, int radiusX, int radiusY, int lifetime);

    //>> Getter and Setter
    int damage() const;
    void setDamage(int damage);

    int direction() const;
    void setDirection(int direction);

    int radiusX() const;
    void setRadiusX(int radiusX);

    int radiusY() const;
    void setRadiusY(int radiusY);

    int lifetime() const;
    void setLifetime(int lifetime);

private:
    int m_damage;
    int m_direction;
    int m_radiusX;
    int m_radiusY;
    int m_lifetime;
};

#endif // EXPLOSIVE_H
