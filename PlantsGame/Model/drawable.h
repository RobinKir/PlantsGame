#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <QString>

/**
 * @brief The Drawable class is an abstract class that contains
 * all information that is needed to draw an object.
 */

class Drawable
{
public:
    //>> Constructor
    Drawable(int x = 0, int y = 0, int width = 0, int height = 0, int margin = 0);

    //>> Getter and Setter
    int type() const;
    void setType(int type);

    int width() const;
    void setWidth(int width);

    int height() const;
    void setHeight(int height);

    int x() const;
    void setX(int x);

    int y() const;
    void setY(int y);

    int margin() const;
    void setMargin(int margin);

    QString path() const;
    void setPath(const QString &path);

private:
    int m_type;
    int m_width;
    int m_height;
    int m_x;
    int m_y;
    int m_margin;
    QString m_path;

};

#endif // DRAWABLE_H
