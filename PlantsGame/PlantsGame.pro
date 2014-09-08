QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlantsGame
TEMPLATE = app


SOURCES += main.cpp\
        Model/drawable.cpp \
        Model/moveable.cpp \
        Model/entity.cpp \
        Model/Projectile/projectile.cpp \
        Model/Explosive/explosive.cpp \
    Model/GuiElements/field.cpp \
    Model/GuiElements/environment.cpp \
    Model/GuiElements/spawnarea.cpp \
    Model/GuiElements/toolbar.cpp \
    Model/GuiElements/menubar.cpp \
    Model/GuiElements/progressbar.cpp \
    Model/model.cpp

HEADERS  += \
            Model/drawable.h \
            Model/moveable.h \
            Model/entity.h \
            Model/Projectile/projectile.h \
            Model/Explosive/explosive.h \
    Model/GuiElements/field.h \
    Model/GuiElements/environment.h \
    Model/GuiElements/spawnarea.h \
    Model/GuiElements/toolbar.h \
    Model/GuiElements/menubar.h \
    Model/GuiElements/progressbar.h \
    Model/model.h

FORMS    +=
