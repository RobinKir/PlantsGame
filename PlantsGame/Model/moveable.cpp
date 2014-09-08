#include "moveable.h"

Moveable::Moveable(float vx, float vy, float slow)
    : m_vx(vx), m_vy(vy), m_slow(slow)
{

}

float Moveable::vx() const
{
    return m_vx;
}

void Moveable::setVx(float vx)
{
    m_vx = vx;
}
float Moveable::vy() const
{
    return m_vy;
}

void Moveable::setVy(float vy)
{
    m_vy = vy;
}
float Moveable::slow() const
{
    return m_slow;
}

void Moveable::setSlow(float slow)
{
    m_slow = slow;
}



