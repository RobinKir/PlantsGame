#include "drawable.h"

Drawable::Drawable(int x, int y, int width, int height, int margin)
    : m_x(x), m_y(y), m_width(width), m_height(height), m_margin(margin)
{
}

int Drawable::type() const
{
    return m_type;
}

void Drawable::setType(int type)
{
    m_type = type;
}
int Drawable::width() const
{
    return m_width;
}

void Drawable::setWidth(int width)
{
    m_width = width;
}
int Drawable::height() const
{
    return m_height;
}

void Drawable::setHeight(int height)
{
    m_height = height;
}
int Drawable::x() const
{
    return m_x;
}

void Drawable::setX(int x)
{
    m_x = x;
}
int Drawable::y() const
{
    return m_y;
}

void Drawable::setY(int y)
{
    m_y = y;
}
int Drawable::margin() const
{
    return m_margin;
}

void Drawable::setMargin(int margin)
{
    m_margin = margin;
}
QString Drawable::path() const
{
    return m_path;
}

void Drawable::setPath(const QString &path)
{
    m_path = path;
}







