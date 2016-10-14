#include "sleeper.h"
 void Sleeper::delay()
 {
     QTime dieTime= QTime::currentTime().addSecs(1);
     while (QTime::currentTime() < dieTime)
         QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
 }
