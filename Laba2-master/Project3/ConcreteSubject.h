#ifndef ConcreteSubject_H
#define ConcreteSubject_H

#include "Subject.h"



class ConcreteSubject : public Subject //реальный класс, реализующий Subject - класс, отслеживающий наблюдателей
{
public:
    void ChangeExist (bool exist_); //изменить существование
    void ChangeSize (int size_); //изменить размер
};

// void ConcreteSubject::ChangeExist(bool exist_)
// {
//     NotifyExist(exist_);
// }

// void ConcreteSubject::ChangeSize(int size_)
// {
//     NotifySize (size_);
// }


#endif // ConcreteSubject_H
