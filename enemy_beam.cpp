#include "enemy_beam.h"
#include <QTimer>
#include <QGraphicsScene>


EnemyBeam::EnemyBeam()
{
    //creates a beam
    setPixmap(QPixmap(":/Images/up_beam.png"));

    //connects a timer with the move function to create a moving beam
    QTimer* timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(move_and_defeat()));
    timer->start(40);
}

void EnemyBeam::move_and_defeat(){
    //moves beam down
    setPos(x(), y() + 10);
    //when bullet reaches end of view, it gets removed and deleted
    if (y() > 670){
        scene()->removeItem(this);
        delete this;
    }
}
