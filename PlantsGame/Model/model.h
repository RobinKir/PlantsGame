#ifndef MODEL_H
#define MODEL_H

#include "Model/GuiElements/field.h"
#include "Model/GuiElements/environment.h"
#include "Model/GuiElements/menubar.h"
#include "Model/GuiElements/progressbar.h"
#include "Model/GuiElements/spawnarea.h"
#include "Model/GuiElements/toolbar.h"

class Model
{
public:
    //>> Constructor
    Model();

    //>> Getter and Setter
    Field *field();
    void setField(const Field &field);

private:
    Field       m_field;
    Environment m_environment;
    Menubar     m_menubar;
    Progressbar m_progressbar;
    SpawnArea   m_spawnArea;
    Toolbar     m_toolbar;

};

#endif // MODEL_H
