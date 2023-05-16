#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

using namespace std;


class Observer //интерфейс наблюдателя
{
public:
    virtual void UpdateExist (bool exist) = 0; //обновление существования файла (чистая виртуальная функция)
    virtual void UpdateSize (int size) = 0; //обновление размера файла
};

#endif // OBSERVER_H
