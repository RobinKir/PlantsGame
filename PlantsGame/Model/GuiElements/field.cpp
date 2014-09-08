#include "field.h"

Field::Field(int rows, int columns)
    : m_rows(rows), m_columns(columns)
{
}
int Field::rows() const
{
    return m_rows;
}

void Field::setRows(int rows)
{
    m_rows = rows;
}
int Field::columns() const
{
    return m_columns;
}

void Field::setColumns(int columns)
{
    m_columns = columns;
}


