#include <ConcreteSubject.h>

void ConcreteSubject::ChangeExist(bool exist_)
{
     emit Subject::SignalExist(exist_);
}

void ConcreteSubject::ChangeSize(int size_)
{
     emit Subject::SignalSize(size_);
}
