#ifndef OBSERVER_H
#define OBSERVER_H
#include <QObject>
#include <string>

using namespace std;


class Observer: public QObject 
    Q_OBJECT
{
public slots:   //определяем слот
    virtual void UpdateExist (bool exist) = 0; //обновление существования файла (чистая виртуальная функция)
    virtual void UpdateSize (int size) = 0; //обновление размера файла
};

#endif // OBSERVER_H
