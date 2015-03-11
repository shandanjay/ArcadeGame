//Arman Farhangi
//January 30, 2015
// Kamehameha Attack!
//grid-based game

#ifndef POWERUPS
#define POWERUPS

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include "player.h"

//inherited from QObject so it can connect
//need to put in Q_OBJECT, a macro that allows for connecting signals and slots
class SpeedUp : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    SpeedUp(Player* player_arg);
    Player* player;
public slots:
    void begone();
};

//inherited from QObject so it can connect
//need to put in Q_OBJECT, a macro that allows for connecting signals and slots
class Burst : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Burst(Player* player_arg);
    Player* player;
public slots:
    void begone();
};

#endif // POWERUPS

