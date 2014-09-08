#ifndef MOVEABLE_H
#define MOVEABLE_H

/**
 * @brief The abstract Moveable class contains information for moving objects.
 */

class Moveable
{
public:
    //>> Constructor
    Moveable(float vx = 0, float vy = 0, float slow = 0);

    //>> Getter and Setter
    float vx() const;
    void setVx(float vx);

    float vy() const;
    void setVy(float vy);

    float slow() const;
    void setSlow(float slow);

private:
    float m_vx;
    float m_vy;
    float m_slow;
};

#endif // MOVEABLE_H
