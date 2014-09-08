#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "Model/drawable.h"
#include "Model/moveable.h"

/**
 * @brief The Projectile class is an abstract class for objects
 * that will be able to move and cause damage.
 */

class Projectile : public Drawable, public Moveable
{
public:
    //>> Constructor
    Projectile(int damage, int range);

    //>> Getter and Setter
    int damage() const;
    void setDamage(int damage);

    int range() const;
    void setRange(int range);

private:
    int m_damage;
    int m_range;
};

#endif // PROJECTILE_H
