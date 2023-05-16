#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

#include "MyFile.h"

class Subject   //класс, отслеживающий наблюдателей
{
    std::vector<Observer*> files; //список наблюдаемых файлов

  public:
    void Attach (Observer*file_); //добавить в отслеживаемые
    void Detach (Observer*file_); //убрать из отслеживаемых
    void NotifyExist (bool exist_); //изменить существование и уведомить об изменении
    void NotifySize (int size_); //изменить размер и уведомить об изменении
};

#endif // SUBJECT_H
