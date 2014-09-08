#ifndef ENTITY_H
#define ENTITY_H

/**
 * @brief The Entity class is an abstract class that contains values for objects
 * that will cause and take damage.
 */

class Entity
{
public:
    //>> Constructor
    Entity(int health, int armor, int shield, int damage);

    //>> Getter and Setter
    int health() const;
    void setHealth(int health);

    int armor() const;
    void setArmor(int armor);

    int shield() const;
    void setShield(int shield);

    int damage() const;
    void setDamage(int damage);

private:
    int m_health;
    int m_armor;
    int m_shield;
    int m_damage;
};

#endif // ENTITY_H
