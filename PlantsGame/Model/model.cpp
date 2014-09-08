#include "model.h"

Model::Model()
    : m_field(5,9), m_environment(), m_menubar(), m_progressbar(), m_spawnArea(), m_toolbar()
{

}

Field *Model::field()
{
    return &m_field;
}

void Model::setField(const Field &field)
{
    m_field = field;
}



