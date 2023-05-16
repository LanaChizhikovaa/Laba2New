#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"
#include <vector>
#include <QObject>
#include "MyFile.h"

class Subject: public QObject //класс, отслеживающий наблюдателей
{         Q_OBJECT
    std::vector<Observer*> files; //список наблюдаемых файлов

  public:
    void Attach (Observer*file_); //добавить в отслеживаемые
    void Detach (Observer*file_); //убрать из отслеживаемых
  signals:
    void SignalExist (bool exist_);
    void SignalSize (int size_);
    //void NotifyExist (bool exist_); //изменить существование и уведомить об изменении
    //void NotifySize (int size_); //изменить размер и уведомить об изменении
};

#endif // SUBJECT_H
