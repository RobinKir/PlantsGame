#ifndef FIELD_H
#define FIELD_H

#include "Model/drawable.h"

class Field : public Drawable
{
public:
    //>> Constructor
    Field(int rows, int columns);

    //>> Getter and Setter
    int rows() const;
    void setRows(int rows);

    int columns() const;
    void setColumns(int columns);

private:
    int m_rows;
    int m_columns;
};

#endif // FIELD_H
